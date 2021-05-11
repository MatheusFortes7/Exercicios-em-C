#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//Exercicio 1- Fazer um método recursivo que recebe um número inteiro e retorna o seu fatorial.//
int fatorial(int n){
    int resposta;
    if(n==1){
        resposta = 1;
    } else {
        resposta = n * fatorial(n-1);
    }
    return resposta;
}
void exec1(){
    int n;
    
    printf("Entre com um numero: ");
    scanf("%d", &n);
    printf("O valor do fatorial do seu numero e: %d", fatorial(n));
}


//Exercicio 2- Fazer um método recursivo que recebe um número inteiro n e retorna o n-ésimo termo da equaçãode recorrência abaixo:
int funcao2(int n){
    int resp;
    if(n==1){
        resp= 2;
    }else if(n==2){
        resp= 3;
    }else { 
        resp = 5*n + pow((funcao2(n-1)),n);
    }
    return resp;
}
void exec2(){
    int n;
    printf("Quantos termos voce deseja ver: ");
    scanf("%d", &n);
    printf("Sua sequencia e: %d\t", funcao2(n));
}


//Exercicio 3- Fazer um método recursivo que recebe um número inteiro e positivo n e calcula o somatório abaixo.

int funcao3(int n){
    int resposta;
    if(n==1){
        resposta = 1;
    } else {
        resposta = n + funcao3(n-1);
    }
    return resposta;
}
void exec3(){
    int n;
    printf("Entre com o numero desejado: ");
    scanf("%d", &n);
    printf("O valor do somatorio e: %d", funcao3(n));
}

//Exercicio 4- Fazer um método recursivo que imprima de um número natural em base binária

int funcao4(int n){
    if( n/2 !=0 ){
        funcao4(n/2);
    }
    printf("%d", n%2);
    return(n);
}
void exec4(){
    int n;
    printf("Entre com o numero que dejesa transformar em binario: ");
    scanf("%d", &n);
    printf("Seu numero em binario e: ");
    printf(funcao4(n));
}

//Exercicio 5- Fazer um método recursivo que multiplique dois números naturais, através de somas sucessivas

int funcao5(int n, int vez, int i){
    int resp = 0;

    if(i < vez){
        resp = n + funcao5(n, vez, i+1);
    }
    return resp;
}
void exec5(){
    int n, vez;
    int i = vez;
    printf("Entre com o valor de n: ");
    scanf("%d", &n);
    printf("Quantas vezes voce deseja somar o numero acima: ");
    scanf("%d", &vez);
    printf("O valor da multiplicacao e: %d", funcao5(n, vez, i));
}

//Exercicio 6- Fazer um método recursivo que calcule o MDC (máximo divisor comum) de dois inteiros positivos m e n

int funcao6(int n, int n2){
    if( n == n2){
       return n;
    } else if(n > n2){
        return funcao6 (n - n2,  n2);
        } else {
           return funcao6(n2 , n);
        }
}
void exec6(){
    int n,n2;
    printf("Entre com os dois numeros do MDC: ");
    scanf("%d\t %d", &n ,&n2);
    printf("O resultado o MDC e: %d", funcao6(n, n2));
}

//Exercicio 7- Fazer um método recursivo que conte os dígitos de um determinado número 
int funcao7(int n){
    if (n ==0){
        return 0;
    }
    return 1 + funcao7(n/10);
}
void exec7(){
    int n;
    printf("Entre com um número: ");
    scanf("%d", &n);
   printf("O seu numero tem %d digitos.", funcao7(n));
}

//Exercicio 8- Fazer um método recursivo que determine se um número é ou não primo.
int funcao8(int x, int n){
    if( n < 2 ){ 
        return 1;
    }

    if( x >= n )
        return 0;

    if(n % x == 0){
        return 1; 
    }
    return funcao8(x + 1, n );
}
void exec8(){
    int x;
    printf("Entre com o numero que voce deseja saber se e primo: ");
    scanf("%d", &x);
     if(!funcao8(2, x )){
        printf("%d e primo", x);
    } else {
        printf("%d nao e primo", x);
    }
    return 0;
}


int main(){
    int exer;
    
    printf("--------------------------------------------\n");
    printf("      Lista 5 AEDs - Recursividade\n");
    printf("        Aluno: Matheus Fortes\n");
    printf("--------------------------------------------\n");
    printf("Entre com o exercicio que voce deseja ver: ");
    scanf("%d", exer);

    switch (exer){
        case 1:
            exec1();
            break;
        case 2:
            exec2();
            break;
        case 3:
            exec3();
            break;
        case 4:
            exec4();
            break;
        case 5:
            exec5();
            break;
        case 6:
            exec6();
            break;
        case 7:
            exec7();
            break;
        case 8:
            exec8();
            break;
        default:
            printf("Exercicio nao existente. ");
            break;
    }
    return 0;
}