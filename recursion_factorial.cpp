#include<stdio.h>
#include<stdlib.h>
long factorial(int);
int main(){
	long result = factorial(7);
	printf("The factorial is %ld",result);
	
}
long factorial(int num){
	if(num>0){
		return num * factorial(--num);
	}
	else{
		return 0;
	}
}
