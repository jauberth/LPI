//##############################################
//# UESC                                       #
//# LPI                                        #
//# Jauberth w. Abijaude                       #
//# jauberth@uesc.br                           #
//##############################################


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int n; 
int main(){
	
	printf("Informe um valor: \n");
	scanf("%d", &n);
	
	if(n%2==0){
		printf("O numero %d e par!", n);
	}
	else
	{	
		printf("O numero %d e impar!", n);
	}
	printf("\n");
return 0;
}