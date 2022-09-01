#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n;
	int f1 = 0,f2=1,sum;
	sum = f1+f2;
	puts("Enter a number : ");
	scanf("%d",&n);
	printf("the fibonacci series : %d, %d, ",f1,f2);
	for(i=3;i<=n;++i){
		printf("%d,",sum);
		f1 = f2;
		f2 = sum;
		sum = f1+f2;
	}
}
