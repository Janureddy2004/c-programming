#include<stdio.h>
#include<stdlib.h>
int main(){
	int max,a,b,c;
	puts("Enter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	max = (a>b)? (a>c?a:c):(b>c? b:c);
	printf("The maximum number : %d",max);
}
