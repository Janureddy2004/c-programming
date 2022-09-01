#include<stdio.h>
#include<stdlib.h>
int lastindexof(char str[], char tf);
int main(){
	char str[1000];
	char tf;
	int n;
	puts("ENter a string : ");
	fgets(str,sizeof str,stdin);
	puts("Enter a character to search : ");
	tf = getchar();
	n = lastindexof(str,tf);
	printf("\nLast index of %c is %d",tf,n);
}
int lastindexof(char str[],char tf){
	int i = 0;
	int n = -1;
	while(str[i]!='\0'){
		if(str[i] == tf){
			n = i;
		}
		i++;
	}
	return n;
}
