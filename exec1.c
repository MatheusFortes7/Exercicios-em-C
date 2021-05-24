#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
char arq1[20], arq2[20];
char linha1[100], linha2[100];

    printf("Entre com o nome do primeiro arquivo: ");
    scanf("%s", arq1);
    printf("Entre como o nome do segundo arquivo: ");
    scanf("%s", arq2);

    FILE *fp1 = fopen(arq1,"r");
    FILE *fp2 = fopen(arq2,"r");
//erro na hr de abrir o arquivo
    if ((fp1 == NULL) || (fp2==NULL)){
        printf("Falha ao encontrar o arquivo");
        return -1;
    }

    FILE *arq3 = fopen("Resultado.txt", "w");

    fgets(linha1, 100, fp1);
    fgets(linha2,100, fp2);
    while (!feof(fp1) && !feof(fp2)){
        if(strcmp(linha1, linha2) < 0){
            fputs(linha1, arq3);
            fgets(linha1, 100, fp1);
        } else {
            fputs(linha2, arq3);
            fgets(linha2, 100, fp2);
        }
    }
    
    if(feof(fp1)){
        while (!feof(fp2)){
            fputs(linha2, arq3);
            fgets(linha2, 100, fp2);
        }
    }

    if(feof(fp2)){
        while (!feof(fp1)){
            fputs(linha1, arq3);
            fgets(linha1, 100, fp1);
        }
    }

    fclose(fp1);
    fclose(fp2);
    fclose(arq3);
return 0;
}