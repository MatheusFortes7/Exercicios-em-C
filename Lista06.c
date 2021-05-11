#include<stdlib.h> 
#include<stdio.h>
#include<math.h>
#include <string.h>

//Exercicio 1;
//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real,e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. 
void exec01(){
   int n;
    float real;
    char x;
    int *TempInt = &n;
    float *TempReal = &real;
    char *TempChar = &x;
        printf("Entre com um valor inteiro: ");
        scanf("%d", &n);
        printf("Entre com o valor do numero real: ");
        scanf("%f", &real);    
        printf("Entre com um caractere: ");
        scanf("%c", &x);
        printf("%d\t%f\t%c\n", n, real, x);
        TempInt= n + 1;
        TempReal = real + 3.2;
        TempChar = x + 1;
        printf("%d\n%f\n%c", TempInt, TempReal, TempChar);
}
//Exercicio 2;
//Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Emseguida, compare seus endereços e exiba o conteúdo do maior endereço.
void exec02(){
    int n, x;
    int *temp, *temp2;

    printf("Entre com o valor do primeiro numero: ");
    scanf("%d", &n);
    printf("Entre com o valor do segundo numero: ");
    scanf("%d", &x);
    *temp = n;
    *temp2 = x;
    if (temp > temp2){
        printf("%d e maior ",temp);
    } else if(temp2 > temp){
        printf("%d e maior ",temp2);
    } else {
        printf("Os numeros sao iguais.");
    }
    
}
//Exercicio 3;
//Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por exemploe, após a execução da função, A conterá o valor de B e B terá o valor de A.
void funcao3(int *n, int *x){
    int z= *n;
    *n = *x;
    *x = z;
}
void exec03(){
    int n, x;
    printf("Entre com o valor de a: ");
    scanf("%d",&n);
    printf("Entre com o valor de b: ");
    scanf("%d",&x);
    funcao3(&n,&x);
    printf("O valor de A agora e %d\n O valor de B agora e %d",n,x);
}
//Exercicio 4;
//Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável.Escreva o conteúdo das 2 variáveis na tela.
void funcao4(int *a,int *b){
    int z;
    if (a>b){
        *a = a;
        *b = b;
    } else {
        z = *b;
        *b = *a;
        *a = z;
    }
}
void exec04(){
    int a,b;
    printf("Entre com o valor do A: ");
    scanf("%d", &a);
    printf("Entre com o valor de B: ");
    scanf("%d", &b);
    funcao4(&a,&b);
    printf("O maior valor e -> %d\n O menor valor e -> %d", a, b);
}
//Exercicio 5;
//Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que retorne a soma do dobro dos dois numeros lidos. A função deverá armazenar o dobro de A na propria variável A e o dobro de B na própria variável B.
void funcao5(int *a, int *b){
    *a = *a * 2;
    *b = *b *2;
    
}
void exec05(){
    int a,b;
    printf("Entre com o valor de A: ");
    scanf("%d", &a);
    printf("Entre com o valotr de B: ");
    scanf("%d", &b);
    funcao5(&a,&b);
    printf("A soma de seus numeros e: %d", (a+b));
}
//Exercicio 6;
//Crie um programa que contenha uma função que permita passar por parâmetro dois numeros inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.
void funcao6(int *a,int *b){
    *a = *a + *b;
}
void exec06(){
    int a,b;
    printf("Entre com o valor de A: ");
    scanf("%d", &a);
    printf("Entre com o valotr de B: ");
    scanf("%d", &b);
    funcao6(&a,&b);
    printf("Valor de A(soma dos dois valores) -> %d\n Valor de B -> %d", a,b);
}
//Exercicio 7;
//Faça um programa que modifique as vogais de uma frase. O programa deve ler uma frase (max.100 caracteres) e armazeá-la num vetor. Imprimir a frase lida trocando as vogais, isto é, trocar ’a’ pelo ’u’, ’e’ pelo ’o’, ’i’ pelo ’u’, ’o’ pelo ’a’ e o ’u’ pelo ’e’. Usar uma função void (procedimento)para realizar a troca e uma função para realizar a impressão da frase trocada. A função deve ter como parâmetro um ponteiro char referente ao vetor
void funcao7(*char array[]){
    for (int i = 0; i < 100 ; i++){
        if (array[i]=='a'){
            array[i] = 'u';
           
        }if (array[i]=='e'){
            array[i] = 'o';
           
        }if (array[i]=='i'){
            array[i] = 'u';
           
        }if (array[i]=='o'){
            array[i] = 'a';
           
        }if (array[i]=='u'){
            array[i] = 'e';
        }
    }
}
void exec07(){
    char array[100];
    scanf("%d", array);
    strlwr(array);
    funcao7(array);
    printf(array);
}
//Exercicio 8;
//Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.
void exec08(){
     int array[10];
    int *temp;
    *temp = array;
    for (int i = 0; i < 10; i++){
        printf("Entre com o valor do array %d: ", i);
        scanf("%d", &array[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 10; i++){
        printf("%d\t%i\n",array[i], temp++);
    }
}
//Exercicio 9;
//Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.
void exec09(){
    int array[5];
    int *temp;
    *temp = array;
    for (int i = 0; i < 5; i++)
    {
        printf("Entre com o numero do array %d", i);
        scanf("%d", temp);
        temp++;
    }
    for (int i = 0; i < 5; i++){
        printf("o dobro do valor %d e: %d\n", i, (*temp)*2);
    }
}
//Exercicio 10;
//Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o endereço das posições contendo valores pares.
void exec10(){
    int array[5];
    for (int i = 0; i < 5; i++){
        printf("Entre com o valor do Array numero %d", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Array numero %d com o endereco = %p", i, array[i]);
    }
}
//Exercicio 11;
//Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores deentrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menorvalor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados natela.
int funcao11(int n1, int n2, int n3){
   int aux = 0; 
   if (n1>n3){
        aux=n3;
        n3=n1;
        n1=aux;
    }
    if (n2>n3){
        aux=n3;
        n3=n2;
        n2=aux;
    }
    if (n3<n1){
        aux=n1;
        *n1 = *n3;
        n3=aux;
    }
    if (n2<n1){
        aux=n1;
        *n1 = *n2;
        n2=aux;
    }

    if (n1==n2&&n1==n3&&n3==n2){
        aux=1;
        printf("Os valores sao iguais:");
    }

    if (n1!=n2&&n3!=n2){
        aux = 0;
        printf("Os valores nao sao iguais:";
    }
}
void exec11(){
    int n1, n2, n3;
    printf("Entre com o primeiro numero: ");
    scanf("%d", &n1);
    printf("Entre com o segundo numero: ");
    scanf("%d", &n2);
    printf("Entre com o terceiro numero: ");
    scanf("%d", &n3);
    funcao11(&n1,&n2,&n3);
    printf("Maior valor: %d", n1);
    printf("Valor medio: %d", n2);
    printf("Menor valor: %d", n3);
}
//Exercicio 12;
//Elabore uma função que receba duas strings como parâmetros e verifique se a segunda stringocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings.
int funcao12(char string[], char string2[]){
    char *temp = string;
    char *temp2 = string2;
    int index = 0;
    for(int i = 0; i < strlen(string); i++){
        for(int j = 0; j < strlen(string2); j++){
            if(*temp2 == *temp1){
                index++;
            }
            if((*temp2 != *temp1)){
                index = 0;
            }
            if(index == strlen(string2)){
                return 1;
            }
            printf("Contador: %i", index);
        }   
        temp2++;
    }
    if(index != strlen(string2)){
        return 0;
    }
}
void exec12(){
    char string[70], string2[10];
    int resp;
    printf("Entre com a primeira string: ");
    setbuf(stdin,0);
    fgets(string, 70, stdin);
    strlwr(string);
    
    printf("Entre com a palavra padrao: ");
    setbuf(stdin,0);
    fgets(string2, 10, stdin);
    strlwr(string2);
    
    resp = funcao12(string, string2);

    if(resp){
        printf("A segunda string esta presente na primeira. ");
    } else {
        printf("A segunda string nao esta presente na primeira. ");
    }
}
//Exercicio 13;
//Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices parapercorrer o array, apenas aritmética de ponteiros.
void funcao13(int arrayy[], int *temp){
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", (temp+i));
    }
    
}
void exec13(){
    int array[5];
    int *temp = array[];
    for (int i = 0; i < 5; i++) {
        printf("Entre com o valor do array: ");
        scanf("%d", &array[i]);
    }
    funcao13(array, temp);
    
}
//Exercicio 14;
//Implemente uma função que receba como parâmetro um array de números reais de tamanhoNe retorne quantos numeros negativos há nesse array. Essa função deve obedecer ao prototipo:
void funcao14(float array){
    int n=0;
    for (int i = 0; i < 5; i++)
    {
        if(array[i] < 0){
            n++
        }
    }
    printf("Voce digitou %d numeros negativos.", n);
}
void exec14(){
    float array[5];

    for (int i = 0; i < 5; i++){
        printf("Entre com o valor do numero: ");
        scanf("%f", &array[i]);
    }

    funcao14(n, array);
}
//Exercicio 15;
//Escreva uma função que receba um array de inteiros V e os endereços de duas variáveis inteiras,min e max, e armazene nessas variáveis o valor mínimo e máximo do array. Escreva também uma função main que use essa função.
void funcao15 (char array[]){
    int *min;
    int *max;
    *min = *max = array[0];
    for (int i = 0; i < 10; i++)
    {
        if (array[i]< *min){
            *min = array[i];
        }
        if(array[i]> *max );
            *max = arrai[i];
    }
    printf("O maior numero do arrayy e: %d\n\nO menor numero do array e: %d", max,min);
    
}
void exec15(){
    int min, max;
    int array[10];
    for (int i = 0; i < 10; i++){
        printf("Entre com um numero: ");
        scanf("%i", &array[i]);
    }
    funcao15(array);
    
}

int main(){
    int n;
    
    printf("-------------------------------------\n");
    printf("    AEDs 1 - Lista 6 - Ponteiros\n");
    printf("        Matheus Fortes\n");
    printf("-------------------------------------\n");
    printf("\n");
    printf("Entre com o numero de exercicio desejado: ");
    scanf("%d", &n);

    switch (n){
    case 1:
        exec01;
        break;
    case 2:
        exec02;
        break;
    case 3:
        exec03;
        break;
    case 4:
        exec04;
        break;
    case 5:
         exec05;
        break;
    case 6:
         exec06;
        break;
    case 7:
         exec07;
        break;
    case 8:
         exec08;
        break;
    case 9:
         exec09;
        break;
    case 10:
         exec10;
        break;
    case 11:
        exec11;
        break;
    case 12:
        exec12;
        break;
    case 13:
        exec13;
        break;
    case 14:
        exec14;
        break;
    case 15:
        exec15;
        break;
    default:
        printf("exercicio invalido.");
        break;
    }

    return 0;
}