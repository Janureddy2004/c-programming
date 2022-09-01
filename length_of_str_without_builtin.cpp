#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char str[100];
	int i = 0;
	puts("\nFind the length of a string : ");
	puts("Input the string : ");
	fgets(str,sizeof str,stdin);
	while(str[i]!='\0'){
		i++;
	}
	printf("Length of the string is %d \n",i-1);
}
