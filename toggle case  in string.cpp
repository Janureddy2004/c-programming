#include<stdio.h>
#include<stdlib.h>
void togglecase(char s[]){
	int i;
	for(i=0;s[i];i++){
		if(s[i]>=65 && s[i]<=90){
			s[i]+=32;
		}
		else if(s[i]>=97 && s[i]<=122){
			s[i]-=32;
		}
	}
}
int main(){
	char s[10000];
	puts("Enter a string : ");
	fgets(s,sizeof s,stdin);
	togglecase(s);
	printf("String = '%s'\n",s);
}
