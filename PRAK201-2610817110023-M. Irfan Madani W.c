#include <stdio.h>

int main(){
    char name[50], student_id[50], paralel_class[50], date_of_birth[50], addres[50], hobby[50], phone_number[50];
    

    printf("Nama                    : ");
    scanf(" %[^\n]", name);
    printf("NIM                     : ");
    scanf(" %[^\n]", student_id);
    printf("Kelas Paralel           : ");
    scanf(" %[^\n]", paralel_class);
    printf("Tempat/Tanggal Lahir    : ");
    scanf(" %[^\n]", date_of_birth);
    printf("Alamat                  : ");
    scanf(" %[^\n]", addres );
    printf("Hobby                   : ");
    scanf(" %[^\n]", hobby);
    printf("No. HP                  : ");
    scanf(" %[^\n]", &phone_number);

    printf("Nama                    : %s\n", name);
    printf("NIM                     : %s\n", student_id);
    printf("Kelas Paralel           : %s\n", paralel_class);
    printf("Tempat/Tanggal Lahir    : %s\n", date_of_birth);
    printf("Alamat                  : %s\n", addres);
    printf("Hobby                   : %s\n", hobby);
    printf("No. HP                  : %s\n", phone_number);

    return 0;
}