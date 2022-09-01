#include<stdio.h>
#include<stdlib.h>
int main(){
	int *a,n,i,k;
	puts("Enter the n & element you want to search : ");
	scanf("%d%d",&n,&k);
	a = (int*)calloc(n,sizeof(int));
	puts("Enter the elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(k == a[i]){
			printf("the element is found in %d index :)",i);
			break;
		}
	}
	if(i==n){
		puts("the element i snot found :(");
	}
	
}
