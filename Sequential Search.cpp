#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
main(){
    int i,input,ketemu;
    char ulang;
    char cari[10],data[10][10];
    printf("masukan jumlah data = ");
    scanf("%d",&input);
    for(i=0;i<input;i++){
        printf("masukan kata ke-%i = ",i+1);
        scanf("%s",&data[i]);
    }
    printf("masukan kata yang dicari = ");
    scanf("%s",&cari);
    ketemu = 0;
    i = 0;
    while(i<input){
        if(strcmp(data[i],cari)==0){
            printf("\n>>>>>>>>>>>>>>>>>> data ditemukan <<<<<<<<<<<<<<<<<");
            ketemu = 1;
            i++;
            }
        else
            i++;
    }
        if(ketemu != 1){
        printf("String %s tidak ditemukan!",cari);
        }
    ulangi:
    printf("\n\nulang lagi (y/n)");
    scanf("%s",&ulang);
    if(ulang == 'y' || ulang == 'Y'){
        system("cls");
        main();
    }
    else if(ulang == 'n' || ulang =='T'){
        return (0);
    }
    else{
        printf("\npilihan tidak ada");
        goto ulangi;
    }
    getch();
    }
