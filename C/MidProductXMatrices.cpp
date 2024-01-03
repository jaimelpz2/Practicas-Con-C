#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	
	srand(time(NULL));
 
 int Product[5][5];
 int n,rows=4,numbers,seed,seed2;
 
 int a=5,b=6,c=2,d=10,cont=0;
 
 
 while(cont==0){
 	
	if(a==b) {
		cont=0;
 	}	
	else if(a>b){
 	cont=1;
	}	
	else if(a<b){
 	cont=2;
 	
 } if(cont==1){
 	if(a==c){
 		cont=0;
	 }else if(a<c){
	 	cont=2;
	 }
 }else if(cont==2){
 	if(a==d){
 		cont=0;
	 }else{
	 	
	 }
 }
 	
 }
 
 

 
 
   
/*
	
	
	printf("los numeros aleatorios son: ");
	
	for(int i=0;i<n;i++){         // this will create the cicle and indicate the numbers of iterations that you wrote
		seed= constant*seed;        // in this method the constant have to multiplier the seed and that result will be a seed, in fact same variable
		seed=seed/100;             // this move the big numbers with a point in this case in the end of that long number will be removed 2 0 to the left
		seed = seed % 10000;    // this part indicate taht will take 4 numbers starting by the recently removed before
		random=seed;              // random will be our ri 
		printf("\n0.%d",random);       //we put 0.1 because the result of ri have 0.1 and we put this before the %d to see the answer good
	}
	printf("\n");
	return 0;
 
 */
 
    printf("Welcome to Constant Multiplier Method\n");
	printf("\nIntroduce the first seed: ");     // ask for the seed that is a chain of characters
	scanf("%d",&seed);
	printf("\nIntroduce the second seed: ");     // ask for the seed that is a chain of characters
	scanf("%d",&seed2);
    printf("how many numbers do you want generate?: ");    // number of iterations or amount of ri  
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
	for(int j=0;j<rows;j++){
		//Product[i][j]= rand() %10000;
	//	seed=Product[0][0];
	//	seed2=Product[0][1];
	//	seed=Product[i][0]*Product[i][1];
	//	seed=Product[0][1];
	//	seed2=Product[0][2];
		//seed=
		
   scanf("%d",&Product[i][j]);
	
}
}


 
for(int i=0;i<n;i++){
	for(int j=0;j<rows;j++){
//		seed=Product[0][0];
//		seed2=Product[0][1];
	 Product[0][2]=Product[0][0]*Product[0][1];
	 Product[1][2]=Product[1][0]*Product[1][1];
	 Product[2][2]=Product[2][0]*Product[2][1];
	 Product[3][2]=Product[3][0]*Product[3][1];
	 Product[4][2]=Product[4][0]*Product[4][1];
	 Product[0][3]=Product[0][2]%10000;
	 Product[1][3]=Product[1][2]%10000;
	 Product[2][3]=Product[2][2]%10000;
	 Product[3][3]=Product[3][2]%10000;
	 Product[4][3]=Product[4][2]%10000;
	 
}

}

for(int i=0;i<n;i++){
	
	for(int j=0;j<rows;j++){
	printf("\t\t[%d][%d]=[%d]",i,j,Product[i][j]);
}
printf("\n");

}

system("pause");

	printf("\n");
	
}
