#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void  crearArreglo(int x[][]);
//int buscarAr(int y);



int main(){
    srand(time(NULL));
    int matriz[5][5];
    printf("hola");

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            matriz[i][j]=rand()%11;
            scanf("%d",&matriz[i][j]);
            printf("%d",matriz[i][j]);
        }
    }

    

    return 0;

}
/*
int crearArreglo(int x[][]){
    int *a;
    a = (int *) calloc(10,sizeof(int));
    for(int i=0;i<10;i++){
        for(int j=0;j<10;i++){
          //  a[i][j]= matriz[i][j]
        }
    }

    return 0;
}

int buscarAr(int y){

    return 0;
}
*/