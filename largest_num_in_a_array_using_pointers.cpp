#include<stdio.h>
#include<stdlib.h>
float largestnum(float *,int);
int main(){
	int n,i;
	float a[30];
	puts("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the any %d numbers :",n);
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
	}
	float *p = a;
	float num = largestnum(p,n);
	printf("The largest number in the array is : %f",num);
}
float largestnum(float *ptr,int size){
	float larg =  *ptr;
	for(int i =0;i<size;i++){
		if(*ptr>larg){
			larg = *ptr;
		}
		ptr++;
	}
	return larg;
}
