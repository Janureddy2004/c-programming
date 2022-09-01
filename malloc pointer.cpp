#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,n;
	puts("Enter n :");
	scanf("%d",&n);
	ptr = (int*)malloc(n * sizeof(int));
	for(int i =0;i<n;i++){
		ptr[i] = i+1;
	}
	puts("The values of the array : ");
	for(int i=0;i<n;i++){
		printf("%d",ptr[i]);
	}
}
