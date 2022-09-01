#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int word(char[]);
int main(){
	char str[100];
	int words;
	puts("Enter the string : ");
	fgets(str,sizeof str,stdin);
	words = word(str);
	printf("The no of words present in the string is : %d\n",words);
	
}
int word(char str[]){
	int i,wrd;
	i=0;
	wrd = 0;
	while(str[i] != '\0'){
		if(str[i]==' '|| str[i] =='\n'|| str[i] == '\t'){
			wrd++;	
		}
		i++;
	}
	return wrd;
}
