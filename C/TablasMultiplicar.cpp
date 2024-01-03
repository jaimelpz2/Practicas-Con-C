#include<stdio.h>


int main(){
	
	
	int numero,resultado;
	
	printf("introduzca el numero: ");
	scanf("%d",&numero);
	
	for(int i=1;i<=10;i++){
		resultado = numero*i;
		printf("\n[%d] x [%d] = [%d]",numero,i,resultado);
	}
	
	return 0;
}
