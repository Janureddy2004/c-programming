#include<stdio.h>
#include<stdlib.h>
void EorO(int *);
int main(){
	int a;
	puts("Enter a number : ");
	scanf("%d",&a);
	EorO(&a);
}
void EorO(int *a){
	if(*a % 2 == 0){
		puts("The number is Even number :)");
	}
	else{
		puts("The number is a odd number :)");
	}
}
