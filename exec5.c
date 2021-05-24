#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
float cont;
float n1;
float maior=0, menor=1000, media=0;
FILE *fp = fopen("numeros.txt", "r");

while(!feof(fp)){
    fscanf(fp, "%f\n ", &n1); 
    if (n1> maior)
    maior = n1;
    if(n1<menor)
    menor = n1;
    media = media + n1;
    cont++;
}
media = media/cont;
printf("O maior numero e: %g\nO menor numero e: %g\nE a media e: %g", maior, menor, media);

fclose(fp);
return 0;
}