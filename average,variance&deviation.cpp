#include<stdio.h>
#include<math.h>5
#include<ctype.h>
#define maxsize 100
int main()
{
	int n,i,sum = 0;
	float value[maxsize];
	float variance,average,stddev,sum1=0,deviation;
	printf("Enter n value : ");
	scanf("%d",&n);
	printf("Enter elements : ");
	for(i=0;i<n;i++){
		scanf("%f",&value[i]);
		if(value[i]== -1)
			break;
		sum+=value[i];
	}
	average = (float)sum/n;
	for(i=0;i<n;i++){
		sum1 = sum1+ pow((value[i]-average), 2);
	}
	variance = sum1/n;
	stddev = sqrt(variance);
	printf("Average of all elements = %.2f\n",average);
	printf("variance of all elements = %.2f\n",variance);
	printf("Standard deviation = %.2f\n",stddev);	
}
