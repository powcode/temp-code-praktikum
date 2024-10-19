#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int validInt(int *var){
    char buff[1000];
    char cek;
    fflush(stdin);
    if(fgets(buff, sizeof(buff), stdin) != NULL){   
        if(sscanf(buff, "%d %c", var, &cek) == 1){
            return 1;
        }
    }
    return 0;
}

void ReValidInt(int *var, char *prompt){
    while(1){
        printf(prompt);
        if(validInt(var)){
            break;
        }
        printf("Input hanya menerima bilangan bulat\n");
    }
}

void pilihanInput(){
    printf("1 : Tambah\n");
    printf("2 : Kurang\n");
    printf("3 : Kali\n");
    printf("4 : Bagi\n");
    printf("5 : Modulus\n");
}


int main () {
    int bil1, bil2, hasil, operasi;
    char op;
    
    printf("================================================================\n");
    printf("===      Program Menghitung Bangun Ruang                     ===\n");
    printf("===                 Kelompok 9                               ===\n");
    printf("===  2405551010--NI MADE ADELIA WIRASANTI                    ===\n");
    printf("===  2405551028--I Made Dwipa Raditya Dinatha                ===\n");
    printf("===  2405551050--Nyoman Pramita Windari                      ===\n");
    printf("===  2405551053--Ida Bagus Dio Gloria                        ===\n");
    printf("===  2405551083--I Gusti Ngurah Agung Vimala Pratista Putra  ===\n");
    printf("===  2405551084--Ignatius Valentino Purnomo                  ===\n");
    printf("===  2405551116--Tania Gracia Siwalette                      ===\n");
    printf("================================================================\n");
    system("pause");
    system("cls");

    do {
        pilihanInput();
        ReValidInt(&operasi, "Silahkan masukkan pilihan input : ");        

        int validOperation = 1;

        switch (operasi) {
        case 1:
            op = '+';
            ReValidInt(&bil1, "Silahkan masukkan bilangan bulat pertama: ");
            ReValidInt(&bil2, "Silahkan masukkan bilangan bulat kedua: ");
            hasil = bil1 + bil2;
            break;
        case 2:
            op ='-';
            ReValidInt(&bil1, "Silahkan masukkan bilangan bulat pertama: ");
            ReValidInt(&bil2, "Silahkan masukkan bilangan bulat kedua: ");
            hasil = bil1 - bil2;
            break;
        case 3:
            op = '*';
            ReValidInt(&bil1, "Silahkan masukkan bilangan bulat pertama: ");
            ReValidInt(&bil2, "Silahkan masukkan bilangan bulat kedua: ");
            hasil = bil1 * bil2;
            break;
        case 4:
            op = '/';
            ReValidInt(&bil1, "Silahkan masukkan bilangan bulat pertama: ");
            ReValidInt(&bil2, "Silahkan masukkan bilangan bulat kedua (TIDAK BOLEH 0): ");
            if(bil2 == 0){
                printf("Bilangan tidak bisa dibagi dengan 0\n");
                validOperation = 0;
            } else {
                hasil = bil1 / bil2;
            }
            break;
        case 5:
            op = '%%';
            ReValidInt(&bil1, "Silahkan masukkan bilangan bulat pertama: ");
            ReValidInt(&bil2, "Silahkan masukkan bilangan bulat kedua (TIDAK BOLEH 0): ");
            if(bil2 == 0){
                printf("Bilangan tidak bisa di modulus dengan 0\n");
                validOperation = 0;
            } else {
                hasil = bil1 % bil2;
            }
            break;
        default:
            printf("Operasi yang dimasukkan tidak tersedia.\n");
            validOperation = 0;
            break;
        }

        if(validOperation == 1){
            printf("Hasil perhitungan %d %c %d adalah: %d\n", bil1, op, bil2, hasil);
        }

        int ulang;
        ReValidInt(&ulang, "\nKetik 1 jika Anda ingin mencoba lagi, dan bilangan lain jika ingin berhenti: ");

        system("cls");
        if(ulang != 1){
            break;
        }
    } while(1);

    printf("==============================================\n");
    printf("===              Program Selesai           ===\n");
    printf("==============================================\n");

    return 0;
}
