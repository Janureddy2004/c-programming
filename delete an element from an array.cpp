#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int *a,i,p,n;
	puts("Enter n :");
	scanf("%d",&n);
	a= (int*)calloc(n,sizeof(int));
	puts("Enter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	puts("Enter the position : ");
	scanf("%d",&p);
	if(p>=n+1){
		puts("Deletion is not possible :)");
	}
	else{
		for(i=p-1;i<n-1;i++){
			a[i] = a[i+1];
		}
		puts("the array after deletion : ");
		for(i=0;i<n-1;i++){
			printf("%d\n",a[i]);
		}
	}
}
