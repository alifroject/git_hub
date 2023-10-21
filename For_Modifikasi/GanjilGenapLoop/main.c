#include <stdio.h>
#include <stdlib.h>

int main(){
		int Bilangan;
	   	char Lagi;
	   	int a, b, X;

		printf("Mencari Bilangan Ganjil/Genap\n");

		printf("Masukkan Angka Pertama: ");
        scanf("%d", &a);

        printf("Masukkan Angka kedua: ");
        scanf("%d", &b);
		for (Bilangan = a; Bilangan <= b; Bilangan++) {
            if(Bilangan %2 == 1) {
                printf("  %d Adalah Ganjil \n", Bilangan);
            }
		else {
             printf("  %d Adalah Genap \n", Bilangan);
		}

		}

		return 0;
		}

