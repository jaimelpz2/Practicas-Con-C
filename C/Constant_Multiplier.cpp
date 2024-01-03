#include<stdio.h>


double MultiplierConstant(int seed,int constant,int n){
	int random;
	for(int i=0;i<n;i++){         // this will create the cicle and indicate the numbers of iterations that you wrote
		seed= constant*seed;        // in this method the constant have to multiplier the seed and that result will be a seed, in fact same variable
		seed=seed/100;             // this move the big numbers with a point in this case in the end of that long number will be removed 2 0 to the left
		seed = seed % 10000;    // this part indicate taht will take 4 numbers starting by the recently removed before
		random=seed;              // random will be our ri 
		printf("\n0.%d",random);       //we put 0.1 because the result of ri have 0.1 and we put this before the %d to see the answer good
	}
}



int main(){
	int seed,constant;
	int n;
	printf("Welcome to Constant Multiplier Method\n");
	printf("\nIntroduce the seed: ");     // ask for the seed that is a chain of characters
	scanf("%d",&seed);
	printf("%Introduce the constant a: ");   // cadena that always is the same and will be multiplier by the seed
	scanf("%d",&constant);
	printf("how many numbers do you want generate?: ");    // number of iterations or amount of ri  
	scanf("%d",&n);
	
	printf("los numeros aleatorios son: ");
	
	printf("%d",MultiplierConstant(seed,constant,n));
	
	printf("\n");
	return 0;
	
	
}
