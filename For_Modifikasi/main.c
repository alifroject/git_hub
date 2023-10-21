#include <stdio.h>
#include <stdlib.h>

int main() {
    char nama[50]; // Maksimal panjang nama adalah 49 karakter
    int X;
    int a;
    int b;


    printf("Masukkan nama Anda: ");
    scanf("%s", nama); // Membaca nama dari input

    printf("Halo, %s!\n", nama); // Menyapa pengguna dengan nama yang dimasukkan

    printf("Masukkan Angka Pertama: ");
    scanf("%d", &a);

    printf("Masukkan Angka terakhir: ");
    scanf("%d", &b);
    for (X = a; X <= b; X++) {
        printf("%s - Perulangan ke-%d\n", nama, X); // Mencetak pesan perulangan dengan nama
    }

    return 0;
}
