#include<stdio.h>



int main(){
	
	
	int a=1,b=0,n;
	
	printf("Introduces how many numbers of fibonacci you want: ");
	scanf("%d",&n);
	
	printf("sequence of fibonacci is:");
	
	for(int i=0;i<n;i++){
		printf("\n%d",b);
		printf("\n%d",a);
      b=b+a;
      a=a+b;
	}
	
	
	
}
