#include<stdio.h>
#include<stdlib.h>
int odd(int[],int);
int main(){
	int num[100],n,oddn;
	puts("Enter n value: ");
	scanf("%d",&n);
	oddn = odd(num,n);
	printf("the odd numbers in the given array is %d",oddn);
	
}
int odd( int arr[],int n){
	int i,oddn =0;
	puts("Enter the elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i] % 2 != 0){
			oddn++;
		}
	}
	return oddn;
}
