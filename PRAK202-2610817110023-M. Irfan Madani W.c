#include <stdio.h>

int main(){
    float first_number, second_number;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &first_number);
    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &second_number);

    float result = first_number + second_number;
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"", first_number, second_number, result);
    return 0;
}