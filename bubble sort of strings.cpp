#include<stdio.h>
#include<stdlib.h>
int main(){
	char str[25][50],temp[25];
	int n,i,j;
	puts("Enter input no of strings : ");
	scanf("%d",&n);
	puts("Enter thee strings : ");
	for(i=0;i<=n;i++){
		fgets(str[i],sizeof str,stdin);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(strcmp(str[j],str[j+1]) >0){
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}
		}
	}
	puts("The sorted strings are : ");
	for(i=0;i<n;i++){
		printf("%s\n",str[i]);
	}
	
	
}
