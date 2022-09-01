#include<stdio.h>
#include<string.h>
int main(){
	//strcat(): append a copy of the source string to the end of the des string.
	char des[30]="Hello";
	char source[40]="Janu";
	strcat(des,source);
	puts(des);
	//strcmp(): compare two strings lexicographically.
	char str1[50]="janu";
	char str2[50] = "jahnavi";
	int result = strcmp(str1,str2);
	printf("\n%d",result);
	// if two strings are same it returns zero if not it returns a non-zero value
	//*
	//strcpy() : copy one string to another.
	char ch[40] ="jr";
	char bh[40] = "kl";
	strcpy(ch, bh);
	printf("\n%s", ch);
	//strlen() : length of the string.
	int length = strlen(str2);
	printf("\n%d",length);
	//upper-lower strings
	strupr(str2);
	strlwr(str1);
	puts("\n");
	puts(str2);
	puts("\n");
	puts(str1);
	
	
	
}
