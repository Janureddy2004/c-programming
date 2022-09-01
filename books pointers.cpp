#include<stdio.h>
#include<stdlib.h>
struct books{
	char title[20],author[20];
	float price;
}*s;
int main(){
	int i,n;
	puts("enter n : ");
	scanf("%d",&n);
	s = (books*)calloc(n,sizeof(books));
	for(i=0;i<n;i++){
		puts("Enter the title of book : ");
		fflush(stdin);
		gets(s[i].title);
		puts("Enter the author : ");
		fflush(stdin);
		gets(s[i].author);
		puts("Enter the price of the book :");
		scanf("%f",&s[i].price);
	}	
	for(i=0;i<n;i++){
		puts("The title : ");
		puts(s[i].title);
		puts("The author : ");
		puts(s[i].author);
		printf("The price :\n%.2f\n",s[i].price);
	}
}
