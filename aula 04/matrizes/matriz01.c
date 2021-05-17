// ***************************************************************************************************
// *  UNIVERSIDADE ESTADUAL DE SANTA CRUZ                                                            *
// *  DEPARTAMENTO DE CIENCIAS EXATAS E TECNOLOGICAS                                                 *
// *  COLEGIADO DE CIENCIA DA COMPUTACAO                                                             *
// *  CURSO DE CIENCIA DA COMPUTACAO                                                                 *
// *  DICIPLINA DE LPI                                                                               *
// *  PROF. JAUBERTH W. ABIJAUDE                                                                     *                                                                                               *
// *  Versão 1.0 - Abril/2021                                                                        *
// *  MATRIZES - EXEMPLO 01                                                                          *
// ***************************************************************************************************

#include <stdio.h>

int main(){

    int i, j;
    int matriz[3][4];

    for(i=0; i<3; i++)
        for(j=0; j<4; j++)
            matriz[i][j] = (i*4)+j+1;
    
    for(i=0; i<3; i++){
        for(j=0; j<4; j++)
            printf("%3d ", matriz[i][j]);
        printf("\n");
    }
}