//using function average of n  numbers :
#include<stdio.h>
#include<stdlib.h>
double average(float[],int);
int main(){
	
	float num[]={656.5,569.2,78.5,96.2,785.2};
	double avg = average(num,sizeof num);
	printf("Average : %.3lf",avg);
}
double average (float arr[],int n){
	double avg,sum =0;
	for(int i =0;i<n;i++){
		sum +=arr[i];
	}
	avg = sum/n;
	return avg;
}
