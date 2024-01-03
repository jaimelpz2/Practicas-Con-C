#include<stdio.h>
#include<stdlib.h>

int factorial(int n){//inicia
	if(n==0){ // si el numero que recibio como parametro es 0 entonces
		n=1;
	}else{// si no
		n=n*factorial(n-1);//lla asi misma la funcion
	}//regresa 
	return n;
	// regresa al inicio
}

int main(){
	
    int n,opcion;
    printf("Welcome to Calculate Factorial: ");
	
    do{
    printf("\npush 1 to continue or !0 to leave: ");
	scanf("%d",&opcion);
    switch(opcion){
    		case 1:
    			 
    printf("Factorial of : ");
	scanf("%d",&n);

	 printf(":%d\t",factorial(n)); // call the function
	 system("pause");
	 break;
    		case 0:
    			system("exit");
    			break;
		}
    	system("cls");// clean the screen
	}while(opcion==1);
	
	

}
