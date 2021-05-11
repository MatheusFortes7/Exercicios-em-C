
//1-
#include <stdio.h>

int main(void) {
  int vlrinicial, unid, dez, cen, vlrfinal;
  printf("Digite um número de 3 dígitos: \n");
  scanf("%d", &vlrinicial );
  cen = vlrinicial/100;
  dez= (vlrinicial%100)/10;
  unid= vlrinicial%10;
  
  vlrfinal = unid*100 + dez*10 + cen;

  printf("O número reverso é: %d", vlrfinal);
  return 0;
}




//2- 
#include <stdio.h>

int main(void) {
  float salario, vlrkil, vlrpag, desconto;
  int qtdekw;
    printf("Digite seu salário: ");
    scanf("%f", &salario);
    printf("quantidade de Kw  consumidos: ");
    scanf("%d", &qtdekw);
    vlrkil= (salario/7)/100;
    vlrpag = vlrkil * qtdekw;
    desconto = vlrpag * 0.9;
  
    printf("Valor  do kilowatt  é de:R$ %.2f\n", vlrkil);
    printf("O  valor total sem desconto é: R$ %.2f\n", vlrpag);
    printf("O valor total pago com desconto de 10%%: R$ %.2f\n", desconto);

    return (0);
}




//3-
#include <stdio.h>
#include <math.h>

int main(void) {
  float base, altura, peri, area, diagonal;   

  printf("Digite a base do retângulo");
  scanf("%f", &base);
  printf("Digite a altura do retângulo");
  scanf("%f", &altura);

  area= (base * altura);
  peri= 2*(base * altura);
  diagonal= pow(diagonal,2 )/pow(base,2)*pow(altura,2);

  printf("A área de seu retângulo é %g\n",area);
  printf("o perimetro é de %g\n", peri );
  printf("e a diagonal é de %g\n", diagonal);

  return 0;
}




//4-
#include <stdio.h>
#include <math.h>

int main(void) {
  float raio, diametro, peri,area;
  printf("Digite o raio do seu círculo:  \n");
  scanf("%f", &raio );
  diametro = raio*2;
  peri= 2 * 3.14 * raio;
  area= 3.14 * pow(raio,2);
  printf("O perímetro do seu círculo é: %.2f\n",peri);
  printf("A área do seu círculo é de: %.2f\n", area);
  return 0;
}


//5-
#include <stdio.h>
#include <math.h>

int main(void) {
  float lado, altura, peri, area, diagonal;   

  printf("Digite o lado do quadrado: ");
  scanf("%f", &lado);
  

  area= lado * lado; 
  peri= lado*4;
  diagonal= sqrt(pow(lado,2)*pow(lado,2));

  printf("A área de seu retângulo é %g\n",area);
  printf("o perimetro é de %g\n", peri );
  printf("e a diagonal é de %g\n", diagonal);

  return 0;
}


//6-
#include <stdio.h>
#include <math.h>

int main(void) {
  float a, b, c, y; 
  printf("Digite um número: ");
  scanf("%f", &a);
  printf("Digite um número: ");
  scanf("%f", &b);
  printf("Digite um número: ");
  scanf("%f", &c);

  y= a + b/(c+a) + 2*(a-b) + log2(64);

  printf("A resposta é: %g", y);

  return (0);
}



//7-
#include <stdio.h>
#include <math.h>

int main(void) {

  float catop, catadj, hip;

  printf("digite o cateto oposto: ");
  scanf("%f",&catop);
  printf("Digite o cateto adjacente: ");
  scanf("%f",&catadj);

  hip= sqrt(pow(catop,2)+pow(catadj,2));

  printf("A hipotenusa de seu triângulo é de %g",hip);

  return 0;
}



//8-
#include <stdio.h>
#include <math.h>

int main(void) {

  int a1, r, dez;

  printf("Digite o termo inicial da PA: ");
  scanf("%d", &a1);
  printf("Digite a razão da PA: ");
  scanf("%d", &r);

  dez= a1 + 10*r;

  printf("O decimo termo de sua PA será: %d",dez);

  return 0;
}




//9-
#include <stdio.h>
#include <math.h>

int main(void) {

  int a1, r, quin;

  printf("Digite o termo inicial da PG: ");
  scanf("%d", &a1);
  printf("Digite a razão da PG: ");
  scanf("%d", &r);

  quin= a1*(pow(r,4));

  printf("O quinto termo de sua PG será: %d",quin);

  return 0;
}


//10- 
#include <stdio.h>

int main(void) {
  float a,b;
  printf("Digite o valor de A: ");
  scanf("%f", &a);
  printf("Digite o valor de B: ");
  scanf("%f" ,&b);

  a= a + b;
  b= a - b;
  a= a - b;

  printf ("O valor de A é: %.2f\n",a );
  printf ("O valor de B é: %.2f\n",b );
  return 0;
  
}
//11- 
#include <stdio.h>
#include <math.h>

int main(void) {

  int num,den;
  float decimal;

  printf("Digite o numerador: ");
  scanf("%d", &num);
  printf("Digite o denominador: ");
  scanf("%d", &den);

  decimal = ((num* 1.0) / den) ;
  
  printf("Os seus números transformados em decimais é: %g",decimal);
  return 0;
}






//12- 
#include <stdio.h>
#include <math.h>

int main(void) {

  int hr, min, temppassado;

  printf("informe somente a HORA de agora: ");
  scanf("%d", &hr);
  printf("informe somente os MINUTOS agora: ");  
  scanf("%d", &min);
  
  temppassado = (hr*60) + min;

  printf("Se passaram %d minutos desde o inicio do dia.", temppassado);

  return 0;
}





//13-
#include <stdio.h>
#include <math.h>

int main(void) {

  float salmin, sal, nmrdsal;

  printf("Infome o salário mínimo: ");
  scanf("%f", &salmin);
  printf("Informe o seu salário: ");  
  scanf("%f", &sal);
  
  nmrdsal = sal/salmin;

  printf("Voçê ganha %g salários mínimos", nmrdsal);

  return 0;
}