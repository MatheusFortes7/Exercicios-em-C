#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

struct alunos{
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
}aluno[5];

int main(){
    float maiorNota = 0;
    char oGenio[50];
    float maiorMedia = 0;
    char genioMedia[50];
    float menorMedia = 999;
    char oBurrin[50];
    float media[5];

    for (int i = 0; i < 5; i++){
        printf("Entre com os dados do aluno %d: \n", i+1);
        printf("Matricula: \n");
        scanf("%d",&aluno[i].matricula);
        printf("Nome do aluno: \n");
        scanf("%[^\n]s\n", aluno[i].nome);
        printf("Nota da prova 1: \n");
        scanf("%f",&aluno[i].nota1);
        printf("Nota da prova 2: \n");
        scanf("%f",&aluno[i].nota2);
        printf("Nota da prova 3: \n");
        scanf("%f",&aluno[i].nota3);
        system("cls");
    }

    for (int i = 0; i < 5; i++){
        media[i] = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;
    }
    
    for (int i = 0; i < 5; i++){
        if (aluno[i].nota1 > maiorNota){
            maiorNota = aluno[i].nota1;
            strcpy(oGenio,aluno[i].nome);
        }
    }
    for (int i = 0; i < 5; i++){
        if (media[i] > maiorMedia){
            maiorMedia = media[i];
            strcpy(genioMedia,aluno[i].nome);
        }
    }
    for (int i = 0; i < 5; i++){
        if (media[i] < menorMedia){
            menorMedia = media[i];
            strcpy(oBurrin,aluno[i].nome);
        }
    }
    for (int i = 0; i < 5; i++){
        printf("Dados do aluno %d: \n\n",i+1);
        printf("Nome: %s\n",aluno[i].nome);
        printf("Media: %f\n",media[i]);
        if (media[i] >= 6){
            printf("Parabens! Voce foi aprovado.\n");
        }else{
            printf("Infelizmente voce foi reprovado. Vamos estudar mais da proxima vez. \n");
        }
    }

    printf("O aluno %s teve a maior nota na primeira prova, com uma nota de: %.2f\n", oGenio, maiorNota);
    printf("O aluno %s teve a maior media, com o valor de : %.2f\n", genioMedia, maiorMedia);
    printf("O aluno %s teve a menor media, com o valor de: %.2f\n", oBurrin, menorMedia);

return 0;
}