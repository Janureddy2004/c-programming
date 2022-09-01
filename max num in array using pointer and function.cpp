#include<stdio.h>
#include<stdlib.h>
void maxnum(int a[],int *n);
int main(){
	int i,n,max,a[70];
	printf("Enter n : ");
	scanf("%d",&n);
	puts("Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	 maxnum(a, &n);
}
void maxnum(int a[],int *n){
	int i,max = a[0];
	for(i=0;i<*n;i++){
		if(a[i]>max){
			max = a[i];
		}
	}
	printf("%d is maximum :)",max);
}
