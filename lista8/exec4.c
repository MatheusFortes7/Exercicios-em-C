#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct banda{
    char nome[30];
    char genero[30];
    int integrantes;
    int rankingBanda;
};

int main(){
    struct banda favorita[5];
    for (int i = 0; i < 5; i++){
        printf("Entre com os dados das banda %d :\n",i+1);
        printf("Nome da banda: ");
        scanf("%[^\n]s \n", favorita[i].nome);
        printf("Genero: ");
        scanf("%[^\n]s \n", favorita[i].genero);
        printf("Numero de integrantes: ");
        scanf("%d \n",&favorita[i].integrantes);
        printf("Ranking da banda: ");
        scanf("%d \n",&favorita[i].rankingBanda);
        system("cls");
    }
    for (int i = 0; i < 5; i++){
        printf("Banda: %d \n", i+1);
        printf("Nome: %s", favorita[i].nome);
        printf("Genero: %s", favorita[i].genero);   
        printf("Numero de integrantes: %d", favorita[i].integrantes);   
        printf("Ranking: %d", favorita[i].rankingBanda);   

    }
return 0;
}



