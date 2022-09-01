#include<stdio.h>
int main(){
	int n,i,count = 0;
	printf("enter n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	count++;
	}
	if(count==2)
	printf("\n %d is prime",n);
	else
	printf("%d is not a prime",n);
	return 0;
}
