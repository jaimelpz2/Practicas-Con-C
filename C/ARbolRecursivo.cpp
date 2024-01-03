#include<stdio.h>
#include<stdlib.h>

char arbol(char x[]){
	
	for(int i=0;i=5;i++){
		arbol(x);
	}
	return x;
}


int main(){
	
	char x[]='+','-','1','2','3';
	
	printf("%d",arbol(x[]));
	
}
