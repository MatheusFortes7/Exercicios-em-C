#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
char og[20];
char z[500];

printf("Entre com o arquivo que deve ser duplicado: ");
scanf("%s", og);

FILE *fp = fopen(og,"r");

if(fp == NULL){
        printf("Falha ao encontrar o arquivo");
        return -1;
    }

FILE *fp2 = fopen("Copia.txt", "w");

while (fgets(z,500,fp) != NULL){
    fputs(z,fp2);
}


fclose(fp);
fclose(fp2);
return 0;
}