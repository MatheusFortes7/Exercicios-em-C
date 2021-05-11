
//Questão 1:
#include <stdio.h>

int main(void) {
  int n,a,soma;

  printf("Quantos numeros você deseja somar? ");
  scanf("%d", &n);
  soma =0;

  while (n>0){
    printf("Digite um número que deseja somar:");
    scanf("%d", &a);
    soma += a;
    n--;
  }

  printf("O resultado de sua soma é: %d", soma);
  return 0;
}





//Questão 2:
#include <stdio.h>

main(void) {
    int a, b, x, n;

    a = 0;
    b = 1;

    printf("Digite o número de termos que deve ser exibido: ");
    scanf("%d", &n);
    printf("%d\t", b);

    for(int i = 0; i < n-1; i++) {

        x = a + b;
        a = b;
        b = x;

        printf("%d\t", x);
    }
   return 0;
}







//Questão 3:
#include <stdio.h>

main(void) {
  int a, b, x, n;

  a = 0;
  b = 1;

  printf("Digite o maior número da sequência: ");
  scanf("%d", &n);
  printf("%d\t", b);

  for(int i = 0; i < n-1; i++) {

    x = a + b;
    a = b;
    b = x;
    if (x<n){
    printf("%d\t", x);
    }   
  }
  return 0;
}


//Questão 4:
#include <stdio.h>
#include <math.h>

int main(void) {
  int termo1, r, n;

  printf("Digite o primeiro termo da PG: ");
  scanf("%d",&termo1);
  printf("Digite a razão da PG: ");
  scanf("%d",&r);
  printf("Qual termo você deseja saber? ");
  scanf("%d", &n);

  n = termo1*pow(r,n-1);

  printf("o termo pedido é: %d",n);
  return 0;
}

//Sem Exponenciação:
#include <stdio.h>
#include <math.h>

int main(void) {
  int termo1, r, n, exp, z, y ;

  printf("Digite o primeiro termo da PG: ");
  scanf("%d",&termo1);
  printf("Digite a razão da PG: ");
  scanf("%d",&r);
  printf("Qual termo você deseja saber? ");
  scanf("%d", &n);
  y = n-1;
  exp = 1;  
 
 for (int i=0; i<y; i++){
    exp = exp * r;
  }

  n = termo1*exp;

  printf("o termo pedido é: %d",n);
  return 0;
}

//Sem multiplicação e exponenciação:
#include <stdio.h>
#include <math.h>

int main(void) {
  int termo1, r, n, exp,z,y,soma,fator ;

  printf("Digite o primeiro termo da PG: ");
  scanf("%d",&termo1);
  printf("Digite a razão da PG: ");
  scanf("%d",&r);
  printf("Qual termo você deseja saber? ");
  scanf("%d", &n);
  y = n-1;
  
  soma = 0;
  fator =1;
  for (int i=0; i<y; i++){
    exp = 0;
    for(int j = 0; j < r ; j++){
      exp= exp + fator;
    }
    fator = exp;
  }
  for (int i=0;i<fator;i++){
    soma += termo1;
  }

  n= soma;

  printf("o termo pedido é: %d",n);
  return 0;
}



//Questão 5:
#include <stdio.h>

int main(void) {
  int b,total,n;

  printf("quantos números você deseja saber: ");
  scanf("%d",&n);
  
  b = 1;

  while (n>0){
    total = b*5;
    printf("%d\n",total);
    
    b++;
    n--;
  }

  return 0;
}

//Questão 6:
#include <stdio.h>
#include <string.h>

int main(void) {
  char mensagem[100];
  int k;

  printf("entre com a mensagem:\n");
  scanf("%[^\n]s", mensagem);
  printf("Informe o valor de K para o ciframento: ");
  scanf("%d",&k);

  printf("\n\n=> Mensagem antes do ciframento: \n%s", mensagem);

  for(int i=0; i<strlen(mensagem);i++)
    mensagem[i] = mensagem[i] + k;

  printf("\n\n=> Mensagem com o ciframrento: \n%s", mensagem);
  
  return 0;
}


//Questão 7: 
#include <stdio.h>

main(void) {
    int a, b, x, n;

    a = 0;
    b = 1;

    printf("Digite o número de termos que deve ser exibido: ");
    scanf("%d", &n);
    printf("%d\t", b);

    for(int i = 0; i < n-1; i++) {

        x = a + b;
        a = b;
        b = x;

        printf("%d\t", x);
    }
   return 0;
}







//Questão 8:
#include <stdio.h>
#include <math.h>

int main(void) {
  int N, numMedia, contB, i, nota;
  numMedia = 0;
  contB = 0;
  float soma, media;
  soma = 0;

  i = 0;
  while (i<10){
    printf("Entre com sua nota da prova: (0 até 10)");
    scanf("%d",&nota);
    soma += nota;
    if (nota < 0.6*10){
      numMedia++;
    }else if(nota >= 0.8*10){
      contB ++;
    }
    i++;
    }
    
    printf("A média da turma é: %.2f\n", soma/10);
    printf("Numéro de alunos com nota maior que 80%% é:%d0%%",contB);
  
    return 0;
}


//Questão 9: 
#include <stdio.h>

int main(void) {
  int i,i2;
  float r,r2;

  printf("Digite um número inteiro: ");
  scanf("%d", &i);
  printf("Digite um número real: ");
  scanf("%f", &r);

  if (i<10){
    i2 = i-2;
    printf("%d", i2);
  } else if (r<10){
    r2 = r + 1;
    printf("%d %f",i,r2);
  }

  return 0;
}


//Questão 10: 
#include <stdio.h>

int main(void) {
  int n,i,serie;

  printf("Digite o numero de termos que deve ser exibido: ");
  scanf("%d",&n);

  i = 1;
  serie = 1;
  printf("%d\t",i);
  while (n > 0){
    
    serie = serie + 2;
    printf("%d\t",serie);
    n--;
  }

  return 0;
}









//Questão 11:
#include <stdio.h>
#include <stdio.h>

int main(void) {
  int n,i,serie;

  printf("Digite o numero de termos que deve ser exibido: ");
  scanf("%d",&n);

  i = 1;
  serie = 1;
  printf("%d\t",i);
  while (n > 0){
    
    serie = serie + 2;
    
    if(serie%3==0 && serie%5==0 || serie%7==0) {
    printf("%d\t",serie);    
    n--; 
    } else {
      printf("Fim do comando!");
    }
  }

  return 0;
}



//Questão 12:
#include <stdio.h>
#include <stdio.h>

int main(void) {
  int n,i,serie,a,b;

  printf("Digite o numero de termos que deve ser exibido: ");
  scanf("%d",&n);
  printf("Digite o A:");
  scanf("%d",&a);
  printf("Digite o B:");
  scanf("%d",&b);

  i = 1;
  serie = 1;
  printf("%d\t",i);
  while (n > 0){
    
    serie = serie + 2;
    if(serie%3==0 && serie%5==0 || serie%7==0) {
    if (serie>a && serie<b)
    printf("%d\t",serie);    
    n--; 
    } else {
      printf("Fim do comando!");
    }
  }
  return 0;
}
//Questão 13:
#include <stdio.h>
#include <stdio.h>
#include <ctype.h>

int main(void) {
  char car;
  
  printf("Entre com um caractere: ");
  scanf("%c",&car);

  if (islower(car)){
    printf("Minúscula.");
  } else if (isupper(car)){
    printf("Maiúscula.");
  } else{
    printf("Outro caractere");
  }


  return 0;
}
