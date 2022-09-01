#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,i;
	float *p,sum=0;
	puts("Enter the value of n : ");
	scanf("%d",&n);
	p = (float*) calloc(n,sizeof(float));
	if(p == NULL){
		puts("memory allocation failed.");
		exit(0);
	}
	else{
		puts("Enter the values: ");
		for(i=0;i<n;i++){
			scanf("%f",p+i);
		}
		for(i=0;i<n;i++){
			sum+=p[i];
		}
		
	
		printf("The sum of the numbers : %f",sum);
	}
}
