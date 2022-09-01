#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n;
	float sum =0,*p;
	puts("Enter the value of n : ");
	scanf("%d",&n);
	p = (float*)calloc(n,sizeof(float));
	if(p == NULL){
		puts("memory allocation cannot happen :(");
		exit(0);
	}
	else{
		puts("Enter the values : ");
		for(i=0;i<n;i++){
			scanf("%f",p+i);
			sum+=p[i];
		}
		printf("The sum of the numbers is : %f",sum);
	}
}
