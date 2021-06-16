//Questao 1:
#include <stdio.h>
int main(void) {
 int a, b, diferenca;
 printf("Entre com o primeiro número: \n");
 scanf("%d", &a);
 printf("Entre com o segundo número: \n");
 scanf("%d", &b);
 diferenca = a - b;
 printf("A diferença dos números é: %d\n", diferenca);
 if (b !=0){
 printf("A divisão %d", a/b);
 }
 return 0;
}


//Questão 2:
#include <stdio.h>
int main(void) {
 int num;
 printf("Entre com o seu número: \n");
 scanf("%d", &num);
 if (num%7 == 0){
 printf("Seu número é divisivel por 7");
 } else
 printf("Seu número não é divisivel por 7");
 return 0;
}


//Questão 3:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
 float a,b,c;
 printf("Entre com o primeiro lado do triangulo: \n");
 scanf("%f", &a);
 printf("Entre com o segundo lado do triangulo: \n");
 scanf("%f", &b);
 printf("Entre com o terceiro lado do triangulo: \n");
 scanf("%f", &c);
 if (abs(b-c)) < a && a < b + c && abs(a-c) < b && b < a+c && abs(a-b) < c && c
< a+b){
 printf("É possível ter um triângulo com estes dados.")
 } else {
 printf("Não é possivel ter um triângulo com estes dados.")
 }
 return 0;
}


//Questão 4:
#include <stdio.h>
#include <math.h>
int main(void) {
 int a,b,x;
 printf("Entre com o x: \n");
 scanf("%d", &x);
 printf("Entre com o a: \n");
 scanf("%d", &a);
 printf("Entre com o b: \n");
 scanf("%d", &b);
 x = -b/a;
 printf("O resultado de sua função é: %d",x);
 return 0;
}


//Questão 5:
#include <stdio.h>
int main(void) {
 int x1, x2, t1, t2, y1, y2, D, Dx, Dy, x, y;

 printf("entre com x1:\n");
 scanf("%d",&x1);
 printf("entre com y1:\n");
 scanf("%d", &y1);
 printf("entre com o termo independente eq1: %d",t1);
 printf("entre com x2:\n");
 scanf("%d",&x2);
 printf("entre com y2:\n");
 scanf("%d", &y2);
 printf("entre com o termo independente eq2: %d",t2);

 D = x1*y2 - x2*y1;
 Dx = t1*y2 - t2*y1;
 Dy = x1*t2 - x2*t1;
 x = Dx/D;
 y = Dy/D;
 printf("valor de X é: %d e Y é: %d",x ,y);
 return 0;
}


//Questão 6: 
#include <stdio.h>
#include <math.h>
int main(void) {
 float a, b, c, delta, x1, x2;

 printf("Digite o a: ");
 scanf("%f", &a);
 printf("Digite o b: ");
 scanf("%f", &b);
 printf("Digite o c: ");
 scanf("%f", &c);
 delta = b*b - 4*a*c;

 if(delta < 0){
 printf("A função não possui raizes reais.");
 }
 else {
 x1 = (-b + sqrt(delta)) / (2*a);
 x2 = (-b - sqrt(delta)) / (2*a);

 printf("O valor de x1: %.2fn", x1);
 printf("O valor de x2: %.2fn", x2);
 }
 return 0;
}


//Questão 7:
#include <stdio.h>
int main(void) {
 float a,b;

 printf("Digite o primeiro número: ");
 scanf("%f", &a);
 printf("Digite o segundo número: ");
 scanf("%f", &b);
 if (a>b){
 printf("%f é maior que %f", a, b);
 } else if(b>a) {
 printf("%f é maior que %f", b, a);
 } else {
 printf("Os dois números são iguais. ");
 }

 return 0;
}


//Questão 8:
#include <math.h>
int main(void) {
 int a, b, c;

 printf("Digite o primeiro lado do triângulo: ");
 scanf("%d", &a);
 printf("Digite o segundo lado do triângulo: ");
 scanf("%d", &b);
 printf("Digite o terceiro lado do triângulo: ");
 scanf("%d", &c);
 if (abs(b-c)) < a && a < b + c && abs(a-c) < b && b < a+c && abs(a-b) < c && c
< a+b){
 else if { (a != b !=c){
 printf("Seu triângulo é escaleno.")
 } else if (a = b !=c || a = c !=b || b = c != a){
 printf("Seu triângulo é isósceles.")
 } else if (a=b=c) {
 printf("Seu triângulo é equilátero.")
 }

 return 0;
}


//Questão 9:
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void) {

int a1, b1, c1;
float a,b,c,cosa, cosb,cosc ;
printf("Digite o valor do primeiro lado: ");
scanf("%i",&a1);
printf("Digite o valor do segundo lado: ");
scanf("%i",&b1);
printf("Digite o valor do terceiro lado: ");
scanf("%i",&c1);
if (abs(b-c)<a && a<b+c && abs(a-c)<b && b<a+c && abs(a-b)<c&& c<a+b){
a = (pow(b1,2)+ pow(c1,2) - pow(a1,2))/(2*b1*c1);
 b = (pow(a1,2)+ pow(c1,2) - pow(b1,2))/(2*a1*c1);
 c = (pow(a1,2)+ pow(b1,2) - pow(c1,2))/(2*b1*b1);
 cosa = acosf(a)*180/3.14;
 cosb = acosf(b)*180/3.14;
 cosc = acosf(c)*180/3.14;
 if (cosa == 90 || cosb == 90 || cosc==90){
 printf("Triângulo Retângulo.")
 } else if (cosa > 90 || cosb > 90 || cosc>90){
 printf("Triângulo Obstusângulo.")
 } else {
 printf("Triângulo acutângulo.")
 }
else {
 printf("Com os lados dados, não é possível ter um triângulo.")
}
return 0;
}


//Questão 10:
int dia, mes, ano;

 printf("Digite o dia: ");
 scanf("%d", &dia);
 printf("Digite o mes: ");
 scanf("%d", &mes);
 printf("Digite o ano: ");
 scanf("%d", &ano);
 if ((ano%4 == 0 && ano%100 !=0) || ano%400 == 0){
 printf("Este ano é bissexto. ");
 } else {
 printf("O ano não é bissexto.");
 }
 return 0;
}


//Questão 11:
#include <stdio.h>
int main(void) {

 float a,b;

 printf("Digite o primeiro valor: ");
 scanf("%f", &a);
 printf("Digite o segundo valor: ");
 scanf("%f", &b);

 if (a > b){
 printf("o maior número é %f",a);
 } else {
 printf("o maior número é %f",b);
 }
 return 0;
}


//Questão 12:
#include <stdio.h>
#include <ctype.h>
int main(void) {

 char letra1, letra2;
 printf("Digite o primeiro caractere: ");
 scanf("%c", &letra1);
 printf("Digite o segundo caractere: ");
 scanf("%c", &letra2);
 if(toupper(letra1) > toupper(letra2))
 printf("caracteres lidos %c\t%c\n", letra1,letra2);
 else
 printf("caracteres lidos %c\t%c\n", letra2,letra1);
 return 0;
}


//Questão 13:
#include <stdio.h>
int main(void) {

 int a,b, x;

 printf("Digite o dividendo: ");
 scanf("%d", &a);
 printf("Digite o divisor: ");
 scanf("%d", &b);

 if (b != 0){
 x= a/b;
 printf("O resultado da sua divisão é: %d", x);
 } else {
 printf("Com os números dados, não é possível realizar uma divisão.");
 }
 return 0;
}


//Questão 14:
#include <stdio.h>
int main(void) {

 int a;

 printf("Digite o seu número: ");
 scanf("%d", &a);


 if (a==0){
 printf("Seu número é IGUAL a zero.");
 } else if (a<0){
 printf("Seu número é MENOR que zero.");
 } else {
 printf("Seu número é MAIOR que zero.");
 }

 return 0;
}


//Questão 15:
#include <stdio.h>
int main(void) {

 int a,a2;

 printf("Digite o seu número: ");
 scanf("%d", &a);
 

 if (a%2==0){
 a2= a*a;
 printf("O quadrado de seu número é: %d", a2);
 } else {
 a2= a*a*a;
 printf("O cubo de seu número é: %d",a2);
 }

 return 0;
}
//Questão 16:
#include <stdio.h>
#include <math.h>
int main(void) {
 int a,a1,b1,r1,areacirculo, lado, area, areainscrito, r2,coroa;

 printf("Digite o seu número: ");
 scanf("%d", &a);

 switch (a)
 case 1:
 case 2:
    printf("entre com o primeiro lado do retângulo:");
    scanf("%d",&a1);
    printf("entre com o segundo lado do retângulo:");
    scanf("%d",&b1);
    r1= sqrt(a1*a1 + b1*b1)/2;
    areacirculo = 3.14*(r1*r1);
    printf("A área do circulo circunscrito é de: %d",areacirculo);
    break;

 case 3:
 case 4:
 case 5:
    printf("Entre com o raio do círculo:");
    scanf("%d", &r1);
    lado = r1*sqrt(2);
    area = lado*lado;
    printf("A área do quadrado circunscrito é: %d",area);
    break;

 default:
    printf("Digite um lado do quadrado: ");
    scanf("%d",&lado);
    r1= lado/2;
    areainscrito = 3.14*(r1*r1);
    r2 = lado;
    area = 3.14*(r2*r2);
    coroa = area - areainscrito;
    printf("A área da coroa circular é: %d", coroa);
 return 0;
}
//Questão 17:
#include <stdio.h>
#include <math.h>
    int main(void) {

    int raio,area,lado;
    char car;
    printf("Entre com o raio do circulo: ");
    scanf("%d", &raio);
    printf("Entre com um caractere: (T, Q, H) ");
    scanf("%c", &car);
        if( car=='T'){
        area = (3*(raio*raio)*sqrt(3))/4;
        printf("A área do triângulo é: %d", area);
            } else if (car=='Q'){
            lado= raio*sqrt(2);
            area= lado*lado;
            printf("A área do quadrado é: %d", area);
                } else if (car== 'H'){
                area= (raio*sqrt(3))/2;
                printf("A área do hexágono é: %d", area);
                    } else {
                    printf("Caractere invalido.");
                    }

 return 0;
 }