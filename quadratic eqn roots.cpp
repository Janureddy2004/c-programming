#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	double a,b,c,d,r1,r2,real,imaginar;
	printf("Enter the coefficients a,b&c : ");
	scanf("%lf%lf%lf",&a,&b,&c);
	d = b*b - 4*a*c;
	if(d>0){
		r1 = (-b +sqrt(d))/(2*a);
		r2 =(-b-sqrt(d))/(2*a);
		printf("The roots are %.2lf,%.2lf\n",r1,r2);
	}
	else if(d==0){
		r1=r2=-b/(2*a);
		printf(" the roots are r1=r2 = %.2lf\n",r1);
	}
	else{
		real = -b/(2*a);
		imaginar = sqrt(-d)/(2*a);
		printf("the roots are r1 = %.2lf\tr2 = %.2lf\n",real,imaginar);
	}
}
