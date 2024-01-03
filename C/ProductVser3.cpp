#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	int x[20],n;
	int y[20];
	
	printf("\nIntroduce the first seed: ");
	scanf("%d",&x[0]);
	printf("\nIntroduce the second seed: ");
	scanf("%d",&x[1]);
	
    printf("how many numbers do you want generate?: ");    // number of iterations or amount of ri  
	scanf("%d",&n);
		printf("\n");
		
	
	
	printf("\nsus semillas son: %d",x[0]);
	printf("\nsus semillas son: %d",x[1]);
	y[0]=x[0]*x[1];
	printf("\nLa multiplicacion fue: %d",y[0]);
	x[2]=y[0];
	x[2]=x[2]/100;
	x[2]=x[2] % 10000;
	printf("\nr1: 0.%d",x[2]);
	
	
		printf("\n");
	printf("\nsus semillas son: %d",x[1]);
	printf("\nsus semillas son: %d",x[2]);
	y[1]=x[1]*x[2];
	printf("\nLa multiplicacion fue: %d",y[1]);
	x[3]=y[1];
	x[3]=x[3]/100;
	x[3]=x[3] % 10000;
	printf("\nr1: 0.%d",x[3]);
		printf("\n");
	
	
	printf("\nsus semillas son: %d",x[2]);
	printf("\nsus semillas son: %d",x[3]);
	y[2]=x[2]*x[3];
	printf("\nLa multiplicacion fue: %d",y[2]);
	x[4]=y[2];
	x[4]=x[4]/100;
	x[4]=x[4] % 10000;
	printf("\nr1: 0.%d",x[4]);
	
	
		printf("\n");
	printf("\nsus semillas son: %d",x[3]);
	printf("\nsus semillas son: %d",x[4]);
	y[3]=x[3]*x[4];
	printf("\nLa multiplicacion fue: %d",y[3]);
	x[5]=y[3];
	x[5]=x[5]/100;
	x[5]=x[5] % 10000;
	printf("\nr1: 0.%d",x[5]);
	
		printf("\n");
	
	printf("\nsus semillas son: %d",x[4]);
	printf("\nsus semillas son: %d",x[5]);
	y[4]=x[4]*x[5];
	printf("\nLa multiplicacion fue: %d",y[4]);
	x[6]=y[4];
	x[6]=x[6]/100;
	x[6]=x[6] % 10000;
	printf("\nr1: 0.%d",x[6]);
	
		printf("\n");
	
	
	
	printf("\nsus semillas son: %d",x[5]);
	printf("\nsus semillas son: %d",x[6]);
	y[0]=x[0]*x[1];
	printf("\nLa multiplicacion fue: %d",y[5]);
	x[2]=y[0];
	x[2]=x[2]/100;
	x[2]=x[2] % 10000;
	printf("\nr1: 0.%d",x[2]);
	
	/*
	   int x[20],n;
	int y[20];

    printf("\nIntroduce the first seed: ");
	scanf("%d",&x[0]);
	printf("\nIntroduce the second seed: ");
	scanf("%d",&x[1]);

    printf("how many numbers do you want generate?: ");    // number of iterations or amount of ri  
	scanf("%d",&n);

for (int i=0;i<n;i++){
	y[i]=x[i]*x[i+1]; //follow the algorithm of the teacher 
	x[i+2]=y[i];
	x[i+2]=x[i+2]/100;
	x[i+2]=x[i+2]%10000;
	printf("\nri : 0.%d",x[i+2]);


}
	*/
	
	
	
}
