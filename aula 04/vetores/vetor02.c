// ***************************************************************************************************
// *  UNIVERSIDADE ESTADUAL DE SANTA CRUZ                                                            *
// *  DEPARTAMENTO DE CIENCIAS EXATAS E TECNOLOGICAS                                                 *
// *  COLEGIADO DE CIENCIA DA COMPUTACAO                                                             *
// *  CURSO DE CIENCIA DA COMPUTACAO                                                                 *
// *  DICIPLINA DE LPI                                                                               *
// *  PROF. JAUBERTH W. ABIJAUDE                                                                     *                                                                                               *
// *  Versão 1.0 - Abril/2021                                                                        *
// *  VETORES - EXEMPLO 02                                                                           *
// ***************************************************************************************************

#include <stdio.h>

int main(){
    int x[100];
    int t;
    int tam_int, tam_total;
    for(t=0; t<100; t++){
        x[t]=t;
        printf("Elemento x[%d]: %d" , t, t);
        printf("\n");
    } 
    tam_int=sizeof(int);
    tam_total=tam_int*100;
    printf("o tamanho de um int é %d bytes", tam_int);
    printf("\n");
    printf("o tamanho do vetor t é %d bytes", tam_total);
    printf("\n");
}