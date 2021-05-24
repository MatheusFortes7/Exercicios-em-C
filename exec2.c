#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
char linha[50];
int nmrpalavras;

printf("teste");

FILE *fp = fopen("teste1.txt", "r");

if(fp == NULL){
        printf("Falha ao encontrar o arquivo");
        return -1;
    }

while(!feof(fp)){
    fgets(linha, 50, fp);
    char *cont = strtok(linha," ,.:;?\n\r\t");
    while (cont != NULL){
        nmrpalavras++;
        cont = strtok(linha," ,.;:?\n\r\t");
    }   
}
fclose(fp);
printf("O arquivo tem %d palavras.", nmrpalavras);

return 0;
}
