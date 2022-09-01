#include<stdio.h>
#include<stdlib.h>
void greet(int);
int main(){
	greet(5);
}
void greet(int num){
	if(num>0){
		puts("Janu");
		greet(--num);
	}
}
