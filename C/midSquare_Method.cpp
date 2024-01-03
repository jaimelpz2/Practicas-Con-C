#include<stdio.h>	
int main(){
	int seed;
	int i,n,random;
	
	printf("Introduzca la semilla");
	scanf("%d",&seed);
	printf("Cuantos numeros va a generar?");
	scanf("%d",&n);
	
	printf("los numeros aleatorios son: ");
	
	for(int i=0;i<n;i++){
		seed= seed*seed;
		seed=seed/100;
		seed = seed % 10000;
		random=seed;
		printf("\n0.%d",random);
	}
	printf("\n");
	return 0;
}
