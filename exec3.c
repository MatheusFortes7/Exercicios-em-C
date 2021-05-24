#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
char arq[20];
int carac=0;

printf("Entre com o nome do arquivo desejado: ");
scanf("%s", arq);

FILE *fp = fopen(arq, "r");

if(fp == NULL){
        printf("Falha ao encontrar o arquivo");
        return -1;
    }

while(getc(fp) != EOF){
    carac++;
}

printf("o arquivo tem %d caracteres.", carac);
fclose(fp);
return 0;
}