#include<stdio.h>
#include<stdlib.h>
void lwr2upr(char *ch){//ch[]
	int i;
	for(i=0;ch[i]!='\0';i++){
		if(ch[i]>='a' && ch[i]<='z'){
			ch[i] = ch[i]-32;
		}
	}
}
void upr2lwr(char str1[]){
	int i;
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]>='A' && str1[i]<='Z'){
			str1[i]+=32;
		}
	}
}
int main(){
	char str[1000],ch[1000];
	puts("Enter a string in lowercase : ");
	fgets(str,sizeof str,stdin);
	lwr2upr(str);
	printf("%s\n",str);
	puts("\nEnter a string in uppercase : ");
	fgets(ch,sizeof ch,stdin);
	upr2lwr(ch);
	printf("\n%s",ch);
}
