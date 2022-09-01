//union
//the memory occupied by the union is equal to  max memory occupied by a paticular variable
// the max memory will allocate to all the data type variables
#include<stdio.h>
#include<stdlib.h>
union Books{
	int price;
	char title[200];
	char author[200];
}s[2];
int main(){
	int i,n;
	puts("Enter the n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		puts("Enter the title : ");
		fgets(s[i].title,sizeof s[i].title,stdin);
		puts(s[i].title);
		puts("Enter the author: ");
		fgets(s[i].author,sizeof s[i].author,stdin);
		puts(s[i].author);
		puts("ENter the price : ");
		scanf("%d",&s[i].price);
		printf("the pric eof the book: %d ",s[i].price);
		
	}
}
