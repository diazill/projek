#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
int i,temp;
int data [] = {84,69,76,86,94,91};

printf("Data SEBELUM di urutkan :\n");
for(i=0;i<6;i++) { printf("%d\t",data[i]); } printf("\n\n");
printf("Proses Exchange :\n"); for(i=0; i<6-1 ;i++)
{ for(int j=0; j<6-1-i ;j++) { if(data[j]<data[j+1])
{
temp = data[j];
data[j] = data[j+1];
data[j+1] = temp;
}
}
for(int k=0; k<6-1 ;k++)
{
printf("%d\t",data[k]);
}
printf("\n");
}
printf("\n");
printf("Data SETELAH di urutkan :\n");
for(i=0;i<6;i++)
{
printf("%d\t",data[i]);
}
getch();
}
