#include<stdio.h>
#include<stdlib.h>
int main(){
	int f = 0,a1=0,a2=1,sum =0;
	while(f<=4000000){
		f = a1+a2;
		if(f%2==0){
			sum+=f;
		}
		a1 = a2;
		a2 = f;
	}
	printf("The sum of the even fibnocci series are : %d ",sum);
	
}
