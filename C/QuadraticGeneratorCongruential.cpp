#include<stdio.h>
#include<stdlib.h>
#include<math.h> // libreria para funciones matematicas
//QUADRATIC CONGRUENTRIAL GENERATOR
	
	int quadratic(int a,int b,int c, int m,int value){ //function G 
		int xi;
		xi=(a*(value*value)+b*value+c) % m;
		
		
		
		return xi;
	}
	
	double random_number(int value,int m){
		
		return (double)value/(m-1);
	}
	
	double generator(int a,int b,int c, int m,int x0,int n){
		
		int xi[n+1];
		xi[0]=x0;// se le indica donde va a empezar
			// for inicia 1 porque la tabla de este metodo inicia en 1
			for(int i=1;i<=n;i++){
				
		    xi[i]=quadratic(a,b,c,m,xi[i-1]);
			
			double ri= random_number(xi[i],m);
			
			printf("\nr%d = %f",i,ri);
		}
		 
		}
		
		
		int main(){
			
			int a=26,b=27,c=27,m=8,x0=13,n=10;
			
			generator(a,b,c,m,x0,n);
			
			/*
			//int xi*=(int*)malloc(sizeof(int)*n);//malloc memory allocation, its a vector dinamic
			int xi[11];
			xi[0]=x0;// se le indica donde va a empezar
			// for inicia 1 porque la tabla de este metodo inicia en 1
		for(int i=1;i<=n;i++){
			
	    xi[i]=quadratic(a,b,c,m,xi[i-1]);
		
		double ri= random_number(xi[i],m);
		
		printf("\nr%d = %f",i,ri);
		//x0=xi; hacerlo por cambio de variable
		*/
		}
		
	
		
		
	
	

	

