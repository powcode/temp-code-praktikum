#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

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
double tabung(double r, double t) {
    double phi = 3.14;
    double luas, volume;
    luas = 2 * phi * r * (r + t);
    volume = phi * pow(r, 2) * t;

    printf("\nLuas Permukaan Tabung : %.2f \n", luas);
    printf("Volume Tabung : %.2f\n", volume);
    return 0;
}

// Fungsi menghitung luas dan volume bola
double bola(double r) {
    double phi = 3.14;
    double luas, volume;

    luas = 4 * phi * pow(r, 2);
    volume = (4.0 / 3) * phi * pow(r, 3);  

    printf("\nLuas Permukaan Bola : %.2f \n", luas);
    printf("Volume Bola : %.2f\n", volume);
    return 0;
}

// Fungsi menghitung luas dan volume limas segiempat
double limasSegiempat(double s, double t) {
    double luas, volume;

    luas = pow(s, 2) + 2 * s * t;
    volume = (1.0 / 3) * pow(s, 2) * t;  

    printf("\nLuas Permukaan Limas Segiempat : %.2f \n", luas);
    printf("Volume Limas Segiempat : %.2f\n", volume);
    return 0;
}

// Fungsi menghitung luas dan volume prisma segitiga
double prismaSegitiga(double a, double b, double c, double t, double ta) {
    double luas, volume;

    luas = a * ta + (a + b + c) * t;
    volume = 0.5 * a * ta * t;

    printf("\nLuas Permukaan Prisma Segitiga : %.2f \n", luas);
    printf("Volume Prisma Segitiga : %.2f\n", volume);
    return 0;
}

// Fungsi menghitung luas dan volume kerucut
double kerucut(double r, double s, double t) {
    double phi = 3.14;
    double luas, volume;

    luas = phi * r * (r + s);
    volume = (1.0 / 3) * phi * pow(r, 2) * t;  

    printf("\nLuas Permukaan Kerucut : %.2f \n", luas);
    printf("Volume Kerucut : %.2f\n", volume);
    return 0;
}

int main() {
    printf("==============================================\n");
    printf("===    Program Menghitung Bangun Ruang     ===\n");
    printf("===               Kelompok 9               ===\n");
    printf("==============================================\n");

    do {
        char pilihan;
        printf("Masukkan Pilihan\n");
        printf("1 : Menghitung Volume dan Luas Permukaan Tabung\n");
        printf("2 : Menghitung Volume dan Luas Permukaan Bola\n");
        printf("3 : Menghitung Volume dan Luas Permukaan Limas Segi Empat\n");
        printf("4 : Menghitung Volume dan Luas Permukaan Prisma Segitiga\n");
        printf("5 : Menghitung Volume dan Luas Permukaan Kerucut\n");
        printf("==============================================\n");
        printf("Masukkan pilihan : ");
        fflush(stdin); 
        scanf("%c", &pilihan);
        getchar();  

        switch (pilihan) {
            case '1': {
                double r, t;

                printf("Masukkan panjang jari-jari alas tabung : ");
                r = input_positive_double();
                printf("\nMasukkan tinggi tabung : ");
                t = input_positive_double();

                tabung(r, t);
                break;
            }
            case '2': {
                double r;

                printf("Masukkan panjang jari-jari bola : ");
                r = input_positive_double();

                bola(r);
                break;
            }
            case '3': {
                double s, t;

                printf("Masukkan panjang sisi alas limas segi empat : ");
                s = input_positive_double();
                printf("\nMasukkan tinggi limas segi empat : ");
                t = input_positive_double();

                limasSegiempat(s, t);
                break;
            }
            case '4': {
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

                prismaSegitiga(a, b, c, t, ta);
                break;
            }
            case '5': {
                double r, s, t;

                printf("Masukkan panjang jari-jari kerucut : ");
                r = input_positive_double();
                printf("\nMasukkan panjang garis pelukis kerucut : ");
                s = input_positive_double();
                printf("\nMasukkan tinggi kerucut : ");
                t = input_positive_double();

                kerucut(r, s, t);
                break;
            }
            default:
                printf("Input pilihan tidak tersedia\n");
                break;
        }

        char ulang;
        printf("\nKetik 1 jika Anda ingin mencoba lagi : ");
        scanf("%c", &ulang);
        if (ulang != '1') {
            break;
        }
        system("cls");
    } while (1);

    printf("==============================================\n");
    printf("===              Program Selesai           ===\n");
    printf("==============================================\n");

    return 0;
}
