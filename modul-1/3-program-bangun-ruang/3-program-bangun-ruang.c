#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Validasi Bilangan bulat non desimal 
int validInt(int *var)
{
  char buff[1020];
  char cek;
  fflush(stdin);
  if (fgets(buff, sizeof(buff), stdin) != NULL)
  {
    if (sscanf(buff, "%d %c", var, &cek) == 1)
    {
      return 1;
    }
  }
  return 0;
}

// Validasi bilangan dari input user
void ReValidInt(int *var, char *prompt)
{
  while (1)
  {
    printf(prompt);
    if (validInt(var))
      break;
    printf("Input Tidak Sesuai! \n");
    printf("\n");
  }
}

// Fungsi untuk input validasi bilangan positif
double input_positive_double() {
    char input[11];
    int i = 0, error = 0, decimal = 0;
    int whole_num = 0, fract_num = 0, chars = 0;
    float zero_point = 1, output;

    fgets(input, sizeof(input), stdin);

    while (input[i] != '\0' && input[i] != '\n') {
        if (input[i] == '-') {
            error = 1;
            break;
        } else if (input[i] == '.') {
            decimal++;
            if (decimal > 1 || input[i + 1] == '\0') {
                error = 1;
                break;
            }
        } else if (isdigit(input[i])) {
            if (decimal == 1) {
                fract_num = (fract_num * 10) + (input[i] - 48);
                chars++;
            } else {
                whole_num = (whole_num * 10) + (input[i] - 48);
            }
        } else {
            error = 1;
            break;
        }
        i++;
    }

    if (decimal == 1) {
        for (int j = 0; j < chars; j++) {
            zero_point /= 10;
        }
        output = fract_num * zero_point + whole_num;
    } else {
        output = whole_num;
    }

    if (error == 1) {
        printf("\nInput Tidak Sesuai. Silahkan Masukkan Angka Kembali : ");
        return input_positive_double();
    } else {
        return output;
    }
}

// Fungsi menghitung luas dan volume tabung
void tabung() {
    double r, t;
    double phi = 3.14;
    double luas, volume;

    printf("Masukkan panjang jari-jari alas tabung : ");
    r = input_positive_double();
    printf("\nMasukkan tinggi tabung : ");
    t = input_positive_double();

    luas = 2 * phi * r * (r + t);
    volume = phi * pow(r, 2) * t;

    printf("\nLuas Permukaan Tabung : %.2f \n", luas);
    printf("Volume Tabung : %.2f\n", volume);
}

// Fungsi menghitung luas dan volume bola
void bola() {
    double phi = 3.14;
    double luas, volume;
    double r;

    printf("Masukkan panjang jari-jari bola : ");
    r = input_positive_double();

    luas = 4 * phi * pow(r, 2);
    volume = (4.0 / 3) * phi * pow(r, 3);  
    printf("\nLuas Permukaan Bola : %.2f \n", luas);
    printf("Volume Bola : %.2f\n", volume);
    
}

// Fungsi menghitung luas dan volume limas segiempat
void limasSegiempat() {
    double luas, volume;
    double s, t;

    printf("Masukkan panjang sisi alas limas segi empat : ");
    s = input_positive_double();
    printf("\nMasukkan tinggi limas segi empat : ");
    t = input_positive_double();

    luas = pow(s, 2) + 2 * s * t;
    volume = (1.0 / 3) * pow(s, 2) * t;  

    printf("\nLuas Permukaan Limas Segiempat : %.2f \n", luas);
    printf("Volume Limas Segiempat : %.2f\n", volume);
    
}

// Fungsi menghitung luas dan volume prisma segitiga
void prismaSegitiga() {
    double luas, volume;
    double a, b, c, t, ta;

    printf("Masukkan panjang sisi alas a prisma segitiga : ");
    a = input_positive_double();
    printf("\nMasukkan panjang sisi alas b prisma segitiga : ");
    b = input_positive_double();
    printf("\nMasukkan panjang sisi alas c prisma segitiga : ");
    c = input_positive_double();
    printf("\nMasukkan tinggi alas prisma segitiga : ");
    ta = input_positive_double();
    printf("\nMasukkan tinggi prisma segitiga : ");
    t = input_positive_double();

    luas = a * ta + (a + b + c) * t;
    volume = 0.5 * a * ta * t;

    printf("\nLuas Permukaan Prisma Segitiga : %.2f \n", luas);
    printf("Volume Prisma Segitiga : %.2f\n", volume);
    
}

// Fungsi menghitung luas dan volume kerucut
void kerucut() {
    double phi = 3.14;
    double luas, volume;
    double r, s, t;

    printf("Masukkan panjang jari-jari kerucut : ");
    r = input_positive_double();
    printf("\nMasukkan panjang garis pelukis kerucut : ");
    s = input_positive_double();
    printf("\nMasukkan tinggi kerucut : ");
    t = input_positive_double();

    luas = phi * r * (r + s);
    volume = (1.0 / 3) * phi * pow(r, 2) * t;  

    printf("\nLuas Permukaan Kerucut : %.2f \n", luas);
    printf("Volume Kerucut : %.2f\n", volume);
}

 
int main() {
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
        int pilihan;

        printf("Masukkan Pilihan\n");
        printf("1 : Menghitung Volume dan Luas Permukaan Tabung\n");
        printf("2 : Menghitung Volume dan Luas Permukaan Bola\n");
        printf("3 : Menghitung Volume dan Luas Permukaan Limas Segi Empat\n");
        printf("4 : Menghitung Volume dan Luas Permukaan Prisma Segitiga\n");
        printf("5 : Menghitung Volume dan Luas Permukaan Kerucut\n");
        printf("==============================================\n");

        ReValidInt(&pilihan, "Masukkan Pilihan : ");
        
        switch (pilihan) {
            case 1: {
                tabung();
                break;
            }
            case 2: {
                bola();
                break;
            }
            case 3: {
                limasSegiempat();
                break;
            }
            case 4: {
                prismaSegitiga();
                break;
            }
            case 5: {
                kerucut();
                break;
            }
            default: {
                printf("Input pilihan tidak tersedia\n");
                break;
            }
        }

        int ulang;
        ReValidInt(&ulang, "\nInput 1 untuk mengulang program dan angka lain untuk memberhentikan program : ");
            system("cls");
        if (ulang != 1) {
            break;
        }
    } while (1);

    printf("==============================================\n");
    printf("===              Program Selesai           ===\n");
    printf("==============================================\n");

    return 0;
}
