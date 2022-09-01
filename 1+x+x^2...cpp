#include<stdio.h>
#include<math.h>
int main(){
	int a,n,i,s=1;
	printf("Enter the n and a values : ");
	scanf("%d%d",&n,&a);
	for(i=1;i<=n;i++){
		s+=pow(a,i);
	}
	printf("the sum equals to %d\n",s);
}
