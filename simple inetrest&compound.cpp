#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int p,r,t;
	float si,ci;
	puts("Enter the p,r&t values : ");
	scanf("%d%d%d",&p,&r,&t);
	si = (p*r*t)/100;
	ci = p*pow((1+(r/100.0)),t);
	printf("the simple interest and compound interest is : %f,%f\n",si,ci);
}
