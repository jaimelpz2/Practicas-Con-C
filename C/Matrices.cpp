#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*
int **crearAr(int filas,int cols);
int **mostrarAr(int matriz);
int **buscarAr(int n,int matriz);
int **ImproveAr(int matriz);
*/

int main(){
	
	srand(time(NULL));
	int **matriz,filas,cols,opcion,n,cont=0;
do{ 
	
system("cls");
printf("\n1.CrearArreglo");
printf("\n2.MostrarArreglo");
printf("\n3.AcomodarArreglo");
printf("\n4.BuscarElemento");
printf("\n5.Salir");
printf("\nElija la Opcion que usted Requiera: ");
scanf("%d",&opcion);


	switch(opcion){
		case 1:
			printf("introduzca el numero de filas:");
			scanf("%d",&filas);
			printf("introduzca el numero de columnas:");
			scanf("%d",&cols);
	matriz = (int **) calloc(filas,sizeof(int *));
	for(int i=0;i<filas;i++){
	matriz[i]=(int *) calloc(cols,sizeof(int));
	
 }

	for(int j=0;j<filas;j++){
    for(int k=0;k<cols;k++){
    	matriz[j][k]=rand()%11;
    }
}

			system("pause");
			system("cls");
			break;
		case 2:
		for(int m=0;m<filas;m++){

		for(int l=0;l<cols;l++){
		printf("\t[%d]",matriz[m][l]);
		}
		printf("\n");

		}
			
			system("pause");
			system("cls");
			break;
		case 3:
			{
			
			int p=filas * cols;
			int vec[p];
			int aux,i=0;
	
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
			
			system("pause");
			system("cls");
		}
			break;
		case 4:
			{
			cont=0;
			printf("introduce el numero a buscar:");
			scanf("%d",&n);
			
			for(int x=0;x<filas;x++){
			for(int y=0;y<cols;y++){
			//	printf(matriz[m][l]);
			if(n==matriz[x][y]){
			cont=1;
			}else{
				cont=0;
			}
		    	
				
		}
		printf("\n");

		}
		
		
		
	
	if (cont==1){
		printf("\nel numero existe en la matriz\n");
		
	}else{
		printf("\nEl numero no existe en la matriz\n");
	}
			system("\npause");
			system("cls");
		}
			break;
	}
	
	}while(opcion<5 && opcion>0);
	
}
	
/*
int **crearAr(int filas,int cols){
	int **matriz,**sustituto;
	matriz = (int **) calloc(filas,sizeof(int *));
	for(int i=0;i<filas;i++){
	matriz[i]=(int *) calloc(cols,sizeof(int));
	
 }

	for(int j=0;j<filas;j++){
    for(int k=0;k<cols;k++){
    	matriz[j][k]=rand()%11;
    }
}
 return matriz;
}


int  **mostrarAr(int matriz){
	//int **matriz;
	//matriz = (int **) calloc(filas,sizeof(int *));
	for(int m=0;m<filas;m++){

		for(int l=0;l<cols;l++){
	//	printf("\t[%d]",matriz[m][l]);
		}
		printf("\n");

		}
	return matriz;
}

int **buscarAr(int n,int matriz){


 return 0;
}

int **ImproveAr(int matriz){

	return 0;
}
*/
