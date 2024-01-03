#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int crearAr(int filas,int cols,int **matriz);
void mostrarAr(int filas,int cols,int **matriz);
bool buscarAr(int n,int **matriz);
int **ImproveAr(int filas,int cols,int matriz);


int main(){
	
	srand(time(NULL));
	int **matriz,filas,cols,opcion,n;
	matriz = (int **) calloc(filas,sizeof(int *));
	
do{ 
	
system("cls");
printf("\n1.CrearArreglo");
printf("\n2.MostrarArreglo");
printf("\n3.AcomodarArreglo");
printf("\n4.BuscarElemento");
printf("\nElija la Opcion que usted Requiera: ");
scanf("%d",&opcion);


	switch(opcion){
		case 1:
			printf("introduzca el numero de filas:");
			scanf("%d",&filas);
			printf("introduzca el numero de columnas:");
			scanf("%d",&cols);

			printf("\n[%s]\n",crearAr(filas,cols,matriz));

			system("pause");
			system("cls");
			break;
		case 2:
			mostrarAr(filas,cols,matriz);
			system("pause");
			system("cls");
			break;
		case 3:
			system("pause");
			system("cls");
			break;
		case 4:
			printf("introduce el numero a buscar:");
			scanf("%d",&n);
			int cont=0;
		
			/*
			for(int a=0;a<filas;a++){
				for(int e=0;e<cols;e++){
					if(n==matriz[a][e]){
						cont=1;
					}else{
						cont=0;
					}
			}
			printf("\n");
			
			}
				if(cont==1){
				printf("\nEl numero se encuentra en la matriz\n");
			}else{
				printf("\nNo se encuentra el numero en la matriz\n");
			}
			*/
			system("\npause");
			system("cls");
			break;
	}
	
	}while(opcion<5 && opcion>0);
	
}
	

int crearAr(int filas,int cols,int **matriz){
	
	for(int i=0;i<filas;i++){
	matriz[i]=(int *) calloc(cols,sizeof(int));
	
 }

	for(int j=0;j<filas;j++){
    	for(int k=0;k<cols;k++){
    		matriz[j][k]=rand()%11;
    }
}
 return **matriz;
}

void  mostrarAr(int filas,int cols,int **matriz){
	
	for(int m=0;m<filas;m++){

		for(int l=0;l<cols;l++){
			printf("%d",matriz[m][l]);
		}
		printf("\n");

		}

}

bool buscarAr(int n,int **matriz){
	
	if(n %2 == 0){
		return true;
	}
		return false;
	

}

int ImproveAr(int filas,int cols,int **matriz){
	
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

	return 0;
}



