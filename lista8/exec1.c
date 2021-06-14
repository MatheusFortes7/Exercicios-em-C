#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct Nascimento {
    int dia;
    int mes;
    int ano;
}Nascimento;

typedef struct Pessoa {
    char nome[20];
    float altura;
    Nascimento data;
}Pessoa;

void GerarData(Nascimento *nascimentoData){
    srand(time(NULL));
    nascimentoData->dia = rand()%31 + 1;
    nascimentoData->mes = rand()%12 + 1;
    nascimentoData->ano = 1950 + (rand()%71);
}

void mostraPessoa(Pessoa p){
    printf("Nome : %s\n", p.nome);
    printf("Altura: %.2f\n", p.altura);
    printf("Data de nascimento: %02d/%02d/%d\n", p.data.dia, p.data.mes, p.data.ano);
    printf("\n");
}

void CadastrarPessoa(Pessoa *p){
    system(" clear || cls");
    printf("Entre com o nome: \n");
    scanf("%[^\n]s", p->nome);
    printf("Entre com a altura: \n");
    scanf("%f", &p->altura);
    GerarData(&p->data);
    fflush(stdin);
    system("pause");
}


int main(){
    Pessoa vetor[10];
    Pessoa nome[20];
    char nomePesquisa[20];
    
    int count = 0;
    for (int i = 0; i < 10; i++){
        CadastrarPessoa(&vetor[i]);
    }

    for (int j = 0; j < 10; j++){
        mostraPessoa(vetor[j]);
    }

return 0;
}