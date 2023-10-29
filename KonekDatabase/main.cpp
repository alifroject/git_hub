#include <iostream>
#include <mysql_connection.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>

using namespace std;

void printWithSpacing(const string& value, int columnWidth) {
    cout << " |  " << value;
    for (int i = value.length(); i < columnWidth; ++i) {
        cout << " ";
    }
}

int main() {
    sql::Driver* driver;
    sql::Connection* con;
    sql::PreparedStatement* pstmt;
    sql::Statement* stmt;
    sql::ResultSet* res = nullptr;

    try {
        driver = get_driver_instance();
        con = driver->connect("tcp://127.0.0.1:3306", "root", "");
        con->setSchema("LPIA");

        string email, password, identitas, nama, alamatKota, nomorTelepon;
        cout << "Buat Akun" << endl;

        cout << "Masukkan Email Anda: ";
        cin >> email;
        cout << "Masukkan Password Anda: ";
        cin >> password;

        pstmt = con->prepareStatement("INSERT INTO pendaftaran (EMAIL, Password) VALUES (?, ?)");
        pstmt->setString(1, email);
        pstmt->setString(2, password);
        pstmt->execute();
        delete pstmt;

        cout << "Data berhasil dimasukkan ke tabel 'pendaftaran'." << endl;

        cout << "Masukkan Identitas: ";
        cin >> identitas;

        string emailSebelumnya, passwordSebelumnya;
        cout << "Masukkan Email sebelumnya: ";
        cin >> emailSebelumnya;
        cout << "Masukkan Password sebelumnya: ";
        cin >> passwordSebelumnya;

        pstmt = con->prepareStatement("SELECT * FROM pendaftaran WHERE EMAIL = ? AND Password = ?");
        pstmt->setString(1, emailSebelumnya);
        pstmt->setString(2, passwordSebelumnya);
        res = pstmt->executeQuery();

        if (res->next()) {
            cout << "Masukkan Nama: ";
            cin >> nama;
            cout << "Masukkan Alamat Kota: ";
            cin >> alamatKota;
            cout << "Masukkan Nomor Telepon: ";
            cin >> nomorTelepon;

            pstmt = con->prepareStatement("INSERT INTO Identitas_Pendaftar (Identitas, EMAIL, Nama, Alamat_Kota, Nomor_Telephone) VALUES (?, ?, ?, ?, ?)");
            pstmt->setString(1, identitas);
            pstmt->setString(2, emailSebelumnya);
            pstmt->setString(3, nama);
            pstmt->setString(4, alamatKota);
            pstmt->setString(5, nomorTelepon);
            pstmt->execute();
            delete pstmt;

            cout << "Informasi telah disimpan dalam tabel 'Identitas_Pendaftar'." << endl;

            stmt = con->createStatement();
            res = stmt->executeQuery("SELECT Identitas, Nama, Alamat_Kota FROM Identitas_Pendaftar");

            cout << "----------------------------------------------------------------" << endl;
            cout << "| Identitas   | Nama Pendaftar        | Alamat Kota Pendaftar  |" << endl;
            cout << "----------------------------------------------------------------" << endl;

            int columnWidthIdentitas = 13; // Lebar kolom identitas
            int columnWidthNama = 15; // Lebar kolom nama
            int columnWidthAlamat = 15; // Lebar kolom alamat

            while (res->next()) {
                printWithSpacing(res->getString("Identitas"), columnWidthIdentitas);
                printWithSpacing(res->getString("Nama"), columnWidthNama);
                printWithSpacing(res->getString("Alamat_Kota"), columnWidthAlamat);
                cout << "|" << endl;
            }

            cout << "-----------------------------------------------" << endl;

            delete stmt;
        }
        else {
            cout << "Email atau Password salah. Proses dibatalkan." << endl;
        }

        delete res;
        delete con;
    }
    catch (sql::SQLException& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
