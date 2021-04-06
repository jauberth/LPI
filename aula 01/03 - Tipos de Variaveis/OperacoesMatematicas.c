#include <stdio.h>
#include <stdlib.h>

int main(){

    int a=6, b=3;

    //Soma
    printf("\n A soma de %d + %d = %d", a, b, a + b);

    //Subtracao
    printf("\n A subtracao de %d - %d = %d", a, b, a - b);

    //Multiplicacao
    printf("\n A multiplicacao de %d * %d = %d", a, b, a * b);

    //Divisao
    printf("\n A divisao de %d / %d = %d", a, b, a / b);

    //Modulo
    printf("\n O resto da divisao de %d / %d = %d", a, b, a%b);

    //Valor Absoluto
    printf("\n O valor absoluto de (-5) = %d ", abs(-5));
    printf("\n");

   return 0;
}
