#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

typedef struct data{
char namabarang [10][10];
char bahanbarang [10][10];
char kodebarang [10][10];
int hargabarang [10];
int jumlahbarang [10];
} barang;

barang brg;
int masukan;
void input(){
    printf("berapa data :"),scanf("%d", &masukan);
    printf("\n");
    for (int i=0;i<masukan;i++){
        printf("\nbarang ke %i : \n", i+1);
        printf("Nama Barang: "),scanf("%s",&brg.namabarang[i]);
        printf("Kode Barang: "),scanf("%s",&brg.kodebarang[i]);
        printf("Jumlah Barang: "),scanf("%i",&brg.jumlahbarang[i]);
        printf("Bahan Barang: "),scanf("%s",&brg.bahanbarang[i]);
        printf("Harga Barang: "),scanf("%i",&brg.hargabarang[i]);
    }
    printf("\nData berhasil di input");
    getch();
}

void lihat(){
    printf("       ------------inventori-----------------       ");
    for (int j=0;j<masukan;j++){
        printf("\nbarang ke %i : \n", j+1);
        printf("Nama Barang: %s\n",brg.namabarang[j]);
        printf("Kode Barang: %s\n",brg.kodebarang[j]);
        printf("Jumlah Barang: %d\n",brg.jumlahbarang[j]);
        printf("Bahan Barang: %s\n",brg.bahanbarang[j]);
        printf("Harga barang: %d\n",brg.hargabarang[j]);
        printf("\n");
}
getch();
}

void menu(){
    int pilih;
    system("cls");
    printf("________________________ TOKO MEBEL __________________________\n");
    printf("|                  1.Input barang                            |\n");
    printf("|                  2.Lihat stok barang                       |\n");
    printf("|                  3.exit                                    |\n");
    printf("|____________________________________________________________|\n");
    printf("pilih mana: ");
    scanf("%i", &pilih);
    switch(pilih)
    {
    case 1 :
        {
            system("cls");
            input();
            menu();
        }
    case 2:
        {
            system("cls");
            lihat();
            menu();
        }
    case 3 :
        {
        exit(0);
    }
    default:
        {
            printf("\ninputan salah");
            getch();
            menu();
        }
}

}

int main(){
    menu();
}
