#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char ch[100],cha;
	int l,i,j;
	puts("Enter the string : ");
	fgets(ch,sizeof ch,stdin);
	strlwr(ch);
	for(i=0;i<strlen(ch);i++){
		for(j=0;j<strlen(ch)-1;j++){
			if(ch[j]>ch[j+1]){
				cha = ch[j];
				ch[j] = ch[j+1];
				ch[j+1]=cha;
			}
		}
	}
	puts("After sorting the string : ");
	printf("%s\n",ch);
}
