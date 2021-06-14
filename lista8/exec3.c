#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>


typedef struct Ponto_inicial{

}Ponto_inicial;

typedef struct Ponto2d{
    int x;
    int y;
    int z;
    Ponto_inicial inicio;
}Ponto2d;


int main(){
    int escolha;

    printf("1- Digitar o valor do primeiro ponto. ");
    printf("2- Digitar os valores do segundo ponto. ");
    printf("3- Mostrar a distancia entre os pontos. ");
    printf("4- Sair. ");

    scanf("%d", escolha);

    switch (escolha){
    case 1:
        printf("Digite o valor do primeiro ponto...");
        break;
    case 2:
        printf("Digite o valor do segundo ponto...");
        break;
    case 3:
        printf("Calculando a distancia entre os pontos....");
        break;
    case 4:
        printf("Saindo......");
        break;
    default:
        printf("Opcao invalida....");
        break;
    }


return 0;
}