#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,gcd,i;
	puts("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a && i<=b;i++){
		gcd = i;
	}
	printf("The gcd is %d\n",gcd);
}
