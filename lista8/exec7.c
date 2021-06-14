#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

typedef struct Nascimento {
    int dia;
    int mes;
    int ano;
}Nascimento;

typedef struct Funcionario{
    char nome[30];
    int idade;
    char sexo;
    char cpf[11];
    Nascimento data;
    int setor;
    char cargo[30];
    float salario;
}Funcionario;

void CadastrarFuncionario(Funcionario *f, Nascimento *d){
    printf("Entre com o nome do funcionario: \n");
    scanf("%[^\n]s\n", f->nome);
    printf("Entre com a idade: ");
    scanf("%d", f->idade);
    printf("Sexo do funcionario: ");
    scanf("%c", f->sexo);
    printf("CPF do funcionario: ");
    scanf("%s", f->cpf);
    printf("Em relacao a data de nascimento do funcionario.\n");
    printf("Dia: ");
    scanf("%d", d->dia);
    printf("Mes: ");
    scanf("%d", d->mes);
    printf("Ano: ");
    scanf("%d", d->ano);
    printf("Codigo do setor do funcionario: ");
    scanf("%d", f->setor);
    printf("Entre com o cargo do funcionario: ");
    scanf("%[^\n]s\n", f->cargo);
    printf("Entre com o salario: ");
    scanf("%f", f->salario);
    system("pause");
}

void MostrarFuncionario(Funcionario *f, Nascimento *d){
    system("cls || clear");
    printf("Nome: %s\n", f->nome);
    printf("Idade: %d\n", f->idade);
    printf("Sexo: %c\n", f->sexo);
    printf("CPF: %s\n", f->cpf);
    printf("Data do nascimento: %d/%d/%d\n", d->dia, d->mes, d->ano);
    printf("Codigo do setor: %d\n", f->setor);
    printf("Cargo exercido: %s\n", f->cargo);
    printf("Salario: %f\n", f->salario);

}

int main(){
    Funcionario f;
    Nascimento d;
    CadastrarFuncionario(&f, &d);
    MostrarFuncionario(&f, &d);

return 0;
}