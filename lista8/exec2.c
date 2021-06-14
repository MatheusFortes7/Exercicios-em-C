#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct compania{
    char nome[50];
    char area[30];
    float valorAtual;
    float valorAnterior;
    float variacao;
};

int main(){
    int nmrEmpresa;
    printf("Voce deseja controlar a bolsa de valores de quantas empresas?");
    scanf("%d",&nmrEmpresa);

    struct compania empresa[nmrEmpresa];
    for (int i = 0; i < nmrEmpresa; i++){
        printf("Entre com os dados da(s) empresa(s): %d\n",i+1);
        printf("Entre com o nome da empresa: \n");
        setbuf(stdin,0);
        scanf("%[^\n]s", empresa[i].nome);        
        printf("Qual e a area da empresa: \n");      
        scanf("%[^\n]s", empresa[i].area);
        printf("Valor da empresa em reais: \n");
        scanf("%f",&empresa[i].valorAtual);
        printf("Antigo valor da empresa: \n");
        scanf("%f",&empresa[i].valorAnterior);
        printf("Variacao da acao da empresa em porcentagem: \n");
        scanf("%f",&empresa[i].variacao);
    }

    for (int i = 0; i < nmrEmpresa; i++){
        printf("Dados da empresa: %d\n",i+1);
        printf("Nome: %s \n Area : %s \n Valor atual: %f \n Valor anterior: %f \n Varicacao de valor: %.2f \n",empresa[i].nome,empresa[i].area,empresa[i].valorAtual,empresa[i].valorAnterior,empresa[i].variacao);
    }
return 0;
}


