#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int test(char s1[],char s2[]){
	int a = 0,i=0;
	while(s1[i]!='\0'||s2[i]!='\0'){
		if(s1[i]==s2[i]){
			s1++;
			s2++;
		}
		else if((s1[i]=='\0'&&s2[i]=='\0')||(s1[i]!='\0'&&s2[i]=='\0')||(s1[i]!=s2[i]))
		{
			a=1;
			break;
			}
	}
	return a;
}
int main(){
	char str1[100],str2[100];
	int a= 0;
	puts("Enter the first string : ");
	fgets(str1,sizeof str1,stdin);
	puts("Enter the second string : ");
	fgets(str2,sizeof str2,stdin);
	a = test(str1,str2);
	if(a==0){
		puts("Strings are equal\n");
	}
	else if(a==1){
		puts("\nStrings are not equal.");
	}
}
