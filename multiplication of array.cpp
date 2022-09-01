#include<stdio.h>
#include<math.h>
int main(){
	int a[20][20],b[20][20],c[20][20],i,j,k,r1,r2,c1,c2,sum;
	printf("Enter the rows and columns for 1st matrix : ");
	scanf("%d%d",&r1,&c1);
	printf("Enter the rows and columns for 2nd matrix : ");
	scanf("%d%d",&r2,&c2);
	printf("Enter the elements of first matrix : ");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of second matrix : ");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	if(r1==r2&&c1==c2){
		for(i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				sum =0;
				for(k=0;k<r1;k++){
					sum+= (a[i][k]*b[k][j]);
				}
				c[i][j] = sum;
			}
		}
	}
	printf("The multiplication is : \n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
}
