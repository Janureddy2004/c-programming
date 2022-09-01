#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,r,c,sum =0,b;
	puts("Enter n : ");
	scanf("%d",&n);
	b = n;
	while(n>0){
		r = n%10;
		c = r*r*r;
		sum+=c;
		n/=10;	
	}
	if(b == sum){
		puts("The number is an armstrong number :)");
	}
	else{
		puts("The number is not an armstrong :)");
	}
}

