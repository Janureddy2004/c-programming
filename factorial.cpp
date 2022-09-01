#include<stdio.h>
int main(){
	int n,i,res=1;
	puts("Enter the number :  ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		res*=i;
	}
	printf("the factorial of number is %d\n",res);
}
