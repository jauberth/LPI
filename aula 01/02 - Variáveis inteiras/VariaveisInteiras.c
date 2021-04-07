#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao de Variaveis
    int a = 5, b;

    //Imprimindo variavel "a"
    printf("O valor de a = %d", a);
    //Pula para proxima linha
    printf("\n");
    //Imprime a mensagem
    printf("Digite valor inteiro para b : ");
    //Aguarda a digitacao de um valor
    scanf("%d", &b);
    printf("\n");
    //Imprime o valor digitado
    printf("O valor de b = %d", b);
    printf("\n");

    return 0;
}
