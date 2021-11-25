#include <stdio.h>
#include <string.h>

struct Notebook {
    int id;
    char name[20];
    int page_num;
    char color[20];
    float price;
};

int main(){

    struct Notebook daftar1;

    daftar1.id = 0;
    daftar1.price = 3008.8;
    daftar1.page_num = 95;
    strcpy(daftar1.name, "chaqmoq macwin");
    strcpy(daftar1.color, "qizil");

    printf("Daftarning tartib raqami: %d\n", daftar1.id);
    printf("Daftarning narxi: %.2f\n", daftar1.price);
    printf("Daftarning sahifalar soni: %d\n", daftar1.page_num);
    printf("Daftarning nomi: %s\n", daftar1.name);
    printf("Daftarning rangi: %s\n", daftar1.color);


    return 0;
}