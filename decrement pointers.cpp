#include<stdio.h>
int main(){
	int values[4]={1,2,3,4};
	int *p;
	p= &values[4];
	for(int i=4;i>0;i--){
		printf("Values at index %d is = %d\n",i,*p);
		p--;
	}
}
