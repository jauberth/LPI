// ***************************************************************************************************
// *  UNIVERSIDADE ESTADUAL DE SANTA CRUZ                                                            *
// *  DEPARTAMENTO DE CIENCIAS EXATAS E TECNOLOGICAS                                                 *
// *  COLEGIADO DE CIENCIA DA COMPUTACAO                                                             *
// *  CURSO DE CIENCIA DA COMPUTACAO                                                                 *
// *  DICIPLINA DE LPI                                                                               *
// *  PROF. JAUBERTH W. ABIJAUDE                                                                     *                                                                                               *
// *  Versão 1.0 - Abril/2021                                                                        *
// *  VETORES - EXEMPLO 01                                                                           *
// ***************************************************************************************************

#include <stdio.h>

int main(){
    //Definindo o vetor
    int x[3];
    // atribuindo valores ao vetor
    x[0]=10;
    x[1]=100;
    x[2]=1000;
    //Imprindo o vetor
    for(int cont=0; cont<3; cont++){
        printf("O valor de x[%d]=%d", cont, x[cont]);
        
        
        printf("\n");
    }
} 