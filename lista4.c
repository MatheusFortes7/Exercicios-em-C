#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//exercicio 1//
int par(int n){
    int resposta = n * 2;
    return resposta;
}

void exercicio01(){ 
    int num;
    printf("Entre com o termo desejado: ");
    scanf("%d", &num);
    int resposta = par(num);
    printf("O n-esimo termo da sequencia é: %d", resposta);
}
//exercicio 2//
void mostrarParesEmOrdemDecrescente(int n){
    for (int = n; i> 0;i--)
        printf("%d", par(i));
}

void exercicio02(){

    int num;
    printf("Entre com o termo desejado: ");
    scanf("%d" &num);
    mostrarParesEmOrdemDecrescente(num);

    
}
//exercicio 3//

double umSobreImpar(int n){
    float num1=1;
    float resultado;

    for(int i=1;i<=n;i++){
        num1 += 2;
    }
    resultado = num1;
    return resultado;

}

void exercicio03(){
    int n;
    printf("Entre com o valor de N: ");
    scanf("%d",&n);
    int resposta = umSobreImpar(n);
    printf("1/", resposta);

}
//exercicio 4//
double somaUmSobreImpar(int n){
    float soma=0;
    for(int i=0;i<n;i++){
        soma += (1/umSobreImpar(i));
    }
    return soma;
}

void exercicio04(){
    int n, s;
    
    printf("Entre com o valor de N: ");
    scanf("%d", &n);
    printf("O valor da soma é: %f", somaUmSobreImpar(n));

}
//exercicio 5//
double parSobreImpar(int n){
    float resultado=0;
    for(int i=1;i<=n;i++){
        resultado = par(i) / umSobreImpar(i);
    }
    return resultado;
}

void exercicio05(){
    int n;
    printf("Entre com o valor de n:\n");
    scanf("%d", &n);
    printf("O termo da sequencia par sobre impar é: %f\n", parSobreImpar(n));
    printf("O valor da soma de par sobre impar é: %f\n", somaParSobreImpar(n));
}
//exercicio 6//
    double funcao6(int n, float x){
    float resultado;
    for (int i = 1; i <= n; i++){
        resultado = parSobreImpar(i) * pow(x,(par(i)/2));
    }
    return resultado;
}

    int n;
    float x;
    printf("Entre com o valor de N:\n");
    scanf("%d", &n);
    printf("Entre com o valor de X:\n");
    scanf("%f", &x);
    printf("O número desejado é: %f\n", funcao6(n,x));
}

//exercicio 7//
double produtoFuncao6(int n, float x){
    float resultado=1;
    for (int i = 1; i <= n; i++){
        resultado = resultado * funcao6(i,x);
    }
    return resultado;
}

void exercicio07(){
    int n;
    float x;
    printf("Entre com o valor de n:\n");
    scanf("%d", &n);
    printf("Entre com o valor de X:\n");
    scanf("%f", &x);
    printf("O valor do numero desejado é: %f\n", produtoFuncao6(n,x));
}

//exercicio 8//
int fatorial (int n){
    int resposta = 1
    while(n > 0){
        resposta = resposta * n;
        n--;
    }
    return resposta;
}

void exercicio08(){
    int n;
    printf("Entre com o valor para calculo do fatorial:");
    scanf("%d", &n);
    int resposta = fatorial(n);
    printf("O resultado da fatorial é: %d", resposta);
}

//exercicio 9//
double funcao6Fatorial(int n, float x){
    float resultado = 0, denominador=1, numerador=0;
    for (int i = 1; i <= n; i++){
        denominador = fatorial(umSobreImpar(i));
        numerador = par(i) * pow(x,(par(i)/2));
    }
    resultado = numerador/denominador;
    return resultado;
}

void exercicio09(){
    int n;
    float x;
    printf("Entre com o valor de n:\n");
    scanf("%d", &n);
    printf("Entre com o valor de x:\n");
    scanf("%f", &x);
    printf("O valor do número desejado é: %f\n", funcao6Fatorial(n,x));
}
//exercicio 10//
double somatorio10(int n, float x){
    float resultado=0;
    for(int i=1;i<=n;i++){
        resultado += funcao6Fatorial(i,x);
    }
    return resultado;
}

void exercicio10(){
    int n;
    float x;
    printf("Entre com o valor de n:\n");
    scanf("%d", &n);
    printf("Entre com o valor de x:\n");
    scanf("%f", &x);
    printf("A soma dos números é: %f\n", somatorio10(n,x));
}

//exercicio 12//
void multiplos5(int n);
    int total;
    int b;
    b = 1;
    while (n>0){
    total = b*5;
    printf("%d\t",total);
    b++;
    n--;
  }

void exercicio12();
    int n;
    printf("Quantos multiplos de 5 você deseja saber?: ");
    scanf("%d", &n);
    multiplos5(n);
//exercicio 13//
int fibonacci(int n){
    if(n ==0 || n == 1){
        resposta = 1;
    } else {
        resposta = fibonacci( n - 1) + fibonacci(n - 2);
    }
    return resposta;
}

void exercicio13(){
    int n;
    printf("Digite o n-esimo termo desejado: ");
    scanf("%d", &n);
    int resposta = fibonacci(n);
    printf("%d", resposta);
}

//exercicio 14//
int menorQueNFibonacci(int n){
    int termo0=0, termo1=1, soma=1, contador=1;
    while(contador != 0){
        soma = termo0+termo1;
        if(soma>n){
            soma = soma - termo0;
            count =0;
        }
        termo0 = termo1;
        termo1 = soma;
    }
    return soma;
}

void exercicio14(){
    int n;
    printf("Digite o limitador:\n");
    scanf("%d", &n);
    printf("O numero mais proximo do limitador eh: %d\n", menorQueNFibonacci(n));
}


int main(){
    int exe;
    printf("--------------------------------------------\n");
    printf("        Lista 4 AEDs - Funções\n");
    printf("        Aluno: Matheus Fortes\n");
    printf("--------------------------------------------\n");
    printf("Digite o número do exercicio que deseje ver: ");
    scanf("%d",&exe);

    switch (exe)
    {
    case 1:
        exercicio01();
        break;
    case 2:
        exercicio02();
        break;
    case 3:
        exercicio03();
        break;
    case 4:
        exercicio04();
        break;
    case 5:
        exercicio05();
        break;
    case 6:
        exercicio06();
        break;
    case 7:
        exercicio07();
        break;
    case 8:
        exercicio08();
        break;
    case 9:
        exercicio09();
        break;
    case 10:
        exercicio10();
        break;
    case 11:
        printf("Exercício desconsiderado!");
        break;

    case 12:
        exercicio12();
        break;
    case 13:
        exercicio13();
        break; 
    case 14:
        exercicio14();
        break;   

    default:
        printf("Pô Felipão, esse exercício tem não uai!\n");
        break;
    }
    
    return 0;
}
