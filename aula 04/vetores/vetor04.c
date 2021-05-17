// ***************************************************************************************************
// *  UNIVERSIDADE ESTADUAL DE SANTA CRUZ                                                            *
// *  DEPARTAMENTO DE CIENCIAS EXATAS E TECNOLOGICAS                                                 *
// *  COLEGIADO DE CIENCIA DA COMPUTACAO                                                             *
// *  CURSO DE CIENCIA DA COMPUTACAO                                                                 *
// *  DICIPLINA DE LPI                                                                               *
// *  PROF. JAUBERTH W. ABIJAUDE                                                                     *                                                                                               *
// *  Versão 1.0 - Abril/2021                                                                        *
// *  VETORES - EXEMPLO 04                                                                           *
// ***************************************************************************************************

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
int main() {
    //Para usar acentos
    setlocale(LC_ALL,"");
    // Solicita o tamanho do vetor
    int tamanho;
    printf("Qual será o tamanho do vetor?");
    scanf("%d", &tamanho);
    // Cria o vetor como tamanho solicitado
    float vetor[tamanho], soma;
    // Insere valores no vetor criado
    int i;
    for(i = 0; i < tamanho; i++){
        printf("Digite um valor para a posição vetor[%d]: ",i);
        scanf("%f", &vetor[i]);
    }
    for(i = 0; i < tamanho; i++){
        printf("\nvetor[%d] = %.2f",i, vetor[i]);
        soma = soma + vetor[i];
    }
    printf("\n");
    printf("A soma dos %d elementos do vetor é %.2f ", tamanho, soma);
    printf("\n");
return 0; 
}