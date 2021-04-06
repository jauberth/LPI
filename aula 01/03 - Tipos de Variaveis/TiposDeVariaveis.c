#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //importa biblioteca para trabalhar com boleanos

int main(){

    //Declarando Variaveis
    int a;
    float b;
    char c;
    bool d;

    //Atinbuindo Valores
    a=5;
    b=2.3;
    c='a';
    d=true; //true = 1; false = 0

    //Escrevendo valores na tela
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %.2f", b);
    printf("\n O valor de c = %c", c);
    printf("\n O valor de d = %d", d);
    //Capturando novos valores
    printf("\n Digite novo valor inteiro para a: ");
    scanf("%d", &a);
    printf("\n Digite novo valor decimal para b = ");
    scanf("%f", &b);
    printf("\n Digite novo valor de string para c = ");
    scanf(" %c", &c);
    printf("\n Digite novo valor boloeano para d = ");
    scanf("%d", &d);
    //Exibindo novos valores
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %.2f", b);
    printf("\n O valor de c = %c", c);
    printf("\n O valor de d = %d", d);
    printf("\n");
    return 0;
}
