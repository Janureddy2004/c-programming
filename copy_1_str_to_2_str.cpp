#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char ch[100],ch1[100];
	int i;
	printf("Copy one string into another string : \n");
	printf("input the string : ");
	fgets(ch1,sizeof ch1,stdin);
	i =0;
	while(ch1[i]!='\0'){
		ch[i] = ch1[i];
		i++;
	}
	ch[i] ='\0';
	printf("The first string is : %s",ch1);
	printf("The second string is : %s",ch);
}
