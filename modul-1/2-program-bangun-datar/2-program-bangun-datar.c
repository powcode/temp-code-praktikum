#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

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

// Validasi double positif
double input_positive_double()
{
  char input[11];
  int i = 0, error = 0, negative = 0, decimal = 0, whole_num = 0, fract_num = 0, chars = 0;
  float zero_point = 1, output;

  fflush(stdin);
  fgets(input, sizeof(input), stdin);

  if (input[0] == '\0')
    error = 1;

  while (input[i] != '\0' && input[i] != '\n')
  {
    if (input[i] == '-')
    {
      error = 1;
      break;
    }
    else if (input[i] == '.')
    {
      decimal++;
      if (decimal > 1 || input[i + 1] == '\0' || input[0] == '.')
      {
        error = 1;
        break;
      }
      i++;
    }
    else if (isdigit(input[i]))
    {
      if (decimal == 1)
      {
        fract_num = (fract_num * 10) + (input[i] - 48);
        chars++;
        i++;
      }
      else
      {
        whole_num = (whole_num * 10) + (input[i] - 48);
        i++;
      }
    }
    else
    {
      error = 1;
      break;
    }
  }

  if (decimal == 1)
  {
    for (int j = 0; j < chars; j++)
    {
      zero_point /= 10;
    }
    output = fract_num * zero_point + whole_num;
  }
  else
    output = whole_num;

  if (negative == 1)
    output -= (output * 2);

  if (error == 1)
  {
    printf("\nInput Tidak Sesuai ");
    printf("\nSilahkan Masukan Angka Kembali : ");
    return input_positive_double();
  }
  else
    return output;
}


void segitigaSembarang() {
    double a, b, c, keliling, luas, s;

    printf("Masukkan panjang sisi a: ");  
    a = input_positive_double();
    printf("Masukkan panjang sisi b: ");
    b = input_positive_double();
    printf("Masukkan panjang sisi c: ");
    c = input_positive_double();

    // Validasi syarat ketidaksetaraan segitiga
    if (a + b > c && a + c > b && b + c > a) {
        keliling = a + b + c;
        s = keliling / 2;
        luas = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("Keliling segitiga tersebut adalah : %.2f\n", keliling);
        printf("Luas segitiga tersebut adalah : %.2f\n", luas);
    } else {
        printf("Sisi-sisi tersebut tidak dapat membentuk segitiga.\n");
    }
}

void belahKetupat() {
    double s, d1,d2, keliling, luas;

    printf("Masukkan panjang sisi : ");
    s = input_positive_double();
    printf("Masukkan panjang diagonal 1 : ");
    d1 = input_positive_double();
    printf("Masukkan panjang diagonal 2: ");
    scanf("%f", &d2);

    keliling = 4*s;
    luas = (d1*d2)/2;

    printf("Keliling belah ketupat tersebut adalah : %.2f\n", keliling);
    printf("Luas belah ketupat tersebut adalah : %.2f\n", luas);
}

void jajarGenjang(){

    double a, b,t, keliling, luas;

    printf("Masukkan panjang sisi a: ");
    a = input_positive_double();
    printf("Masukkan panjang sisi b : ");
    b = input_positive_double();
    printf("Masukkan panjang sisi tinggi: ");
    t = input_positive_double();

    keliling =  2*(a+b);
    luas = a * t;

    printf("Keliling jajar genjang tersebut adalah : %.2f\n", keliling);
    printf("Luas jajar genjang tersebut adalah : %.2f\n", luas);

}

void trapesium(){

    float a, b,c,d,t, keliling, luas;

    printf("Masukkan panjang sisi a: ");
    a = input_positive_double();
    printf("Masukkan panjang sisi b : ");
    b = input_positive_double();
    printf("Masukkan panjang sisi c: ");
    c = input_positive_double();
    printf("Masukkan panjang sisi d : ");
    d = input_positive_double();
    printf("Masukkan panjang sisi tinggi: ");
    t = input_positive_double();

    keliling = a+b+c+d;
    luas = (a+b)/2 * t;

    printf("Keliling trapesium tersebut adalah : %.2f\n", keliling);
    printf("Luas trapesium tersebut adalah : %.2f\n", luas);
}

void lingkaran(){
    double r, keliling, luas;
    double phi =  3.14;

    printf("Masukkan panjang jari-jari lingkaran : ");
    r = input_positive_double();
   

    keliling = 2*phi*r;
    luas = phi*pow(r,2);

    printf("Keliling lingkaran tersebut adalah : %lf\n", keliling);
    printf("Luas lingkaran tersebut adalah : %lf\n", luas);

}

int main(){


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
        char pilihan;
        printf("Masukkan Pilihan\n");
        printf("1 : Menghitung Keliling dan Luas Segitiga\n");
        printf("2 : Menghitung Keliling dan Luas Belah Ketupat\n");
        printf("3 : Menghitung Keliling dan Luas Jajar Genjang\n");
        printf("4 : Menghitung Keliling dan Luas Trapesium\n");
        printf("5 : Menghitung Keliling dan Luas Lingkaran\n");
        printf("==============================================\n");
        
        ReValidInt(&pilihan, "Masukkan Pilihan : ");

        switch (pilihan)
        {
        case 1:
            segitigaSembarang();
            break;
        
        case 2 : 
            belahKetupat();
            break;

        case 3 : 
            belahKetupat();
            break;

        case 4 : 
            trapesium();
            break;

        case 5 :
            lingkaran();
            break;

        

        default:
            printf("Input pilihan tidak tersedia\n");
            break;
        }

        int ulang;
        ReValidInt(&ulang, "\nInput 1 untuk mengulang program dan angka lain untuk memberhentikan program : ");
            system("cls");
        if (ulang != 1) {
            break;
        }

    } while(1);

    printf("==============================================\n");
    printf("===              Program Selesai           ===\n");
    printf("==============================================\n");

    return 0;
}