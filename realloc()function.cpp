#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	float *p,sum=0;
	puts("Enter n : ");
	scanf("%d",&n);
	p = (float*)calloc(n,sizeof(float));
	if(p==NULL){
		puts("memory allocation cannot happen :)");
		exit(0);
	}
	else{
		puts("Enter the data :)");
		for(int i=0;i<n;i++){
			scanf("%f",p+i);
		}
		int c,newsize;
		puts("ENter the number of values you want to enter :)");
		scanf("%d",&c);
		newsize =c+n;
		p = (float*)realloc(p,newsize*sizeof(float));
		puts("EMter the values of the data : ");
		for(int i=0;i<newsize;i++){
			scanf("%f",p+i);
		}
		for(int i=0;i<newsize;i++){
			sum+=p[i];
		}
		printf("The sum of the data is : %f",sum);
	}
}
