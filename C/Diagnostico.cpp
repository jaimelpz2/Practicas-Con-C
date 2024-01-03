#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>


int crearAR(int filas,int cols,int **matriz);
void mostrarAR(int filas,int cols,int **matriz);
int improveAr(int filas,int cols,int **matriz2);
int buscarAr(int n,int filas,int cols,int **matriz);



int main(){
	
	srand(time(NULL));
	int **matriz,filas,cols,opcion,n,cont=0;
	

	printf("introduzca el numero de filas:");
	scanf("%d",&filas);
	printf("introduzca el numero de columnas:");
	scanf("%d",&cols);
	matriz = (int **) calloc(filas,sizeof(int *));
	for(int i=0;i<filas;i++){
	matriz[i]=(int *) calloc(cols,sizeof(int));
	
 }

	printf("",crearAR(filas,cols,matriz));
	printf("\nMatriz originada..\n");
	mostrarAR(filas,cols,matriz);
	printf("\nMatriz ordenada\n",improveAr(filas,cols,matriz));
	mostrarAR(filas,cols,matriz);
	printf("\nintroduce el numero a buscar:\n");
	scanf("%d",&n);
	printf("\n1:true,0:false : {%d}\n",buscarAr(n,filas,cols,matriz));

		
	
	
		}
	
		
		
		
int crearAR(int filas,int cols,int **matriz){
	
	for(int j=0;j<filas;j++){
    for(int k=0;k<cols;k++){
    	matriz[j][k]=rand()%11;
    }
	
	
}
return **matriz;
}


void mostrarAR(int filas,int cols,int **matriz){

		for(int m=0;m<filas;m++){

		for(int l=0;l<cols;l++){
		printf("\t[%d]",matriz[m][l]);
		}
		printf("\n");

		}

	
}


int improveAr(int filas,int cols,int **matriz){
	int p=filas * cols;
	 int vec[p], aux,i=0;
	
	for(int x=0;x<filas;x++){
			for(int y=0;y<cols;y++){
					vec[i++]=matriz[x][y];
				
		}
		printf("\n");

		}
		
		for(int z=0;z<p;z++){
			for(int u=0;u<p-1;u++){
				if(vec[u]>vec[u+1]){
					aux=vec[u];
					vec[u]=vec[u+1];
					vec[u+1]=aux;
					
				}
			}
		}
		i=0;
		
		for(int x=0;x<filas;x++){
			for(int y=0;y<cols;y++){
					matriz[x][y] = vec[i++];
					
			
		}
		printf("\n");

		}
		
	
	return **matriz;
	
}


int buscarAr(int n,int filas,int cols,int **matriz){
	int flag=0;
	
		for(int x=0;x<filas;x++){
			for(int y=0;y<cols;y++){
			if(n==matriz[x][y]){
				flag=1;
			}
			
		}
		printf("\n");
		}
		if(flag==1){
			return 1;
		}else{
			return 0;
		}
		
		
		}
			




