#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int test(int a,int b){
	return 2*(a+b);
}
int main(){
	int perimeter = test(6,8);
	printf("%d\n",perimeter);
		
}
