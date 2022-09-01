#include<stdio.h>
#include<stdlib.h>
int main(){
	int k,n,j,i,a[20][20],t[20][20];
	puts("enter rows and columns : ");
	scanf("%d%d",&k,&n);
	puts("Enter elements of the matrix \n");
	fflush(stdin);
	for(i=0;i<k;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<k;i++){
		for(j=0;j<n;j++){
			t[j][i]=a[i][j];
		}
	}
	printf("transpose of the matrix : \n");
	for(i=0;i<k;i++){
		for(j=0;j<n;j++){
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}
