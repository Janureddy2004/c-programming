#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
int main(){
	char a[size],b[size],c[size];
	int n,r,t=0,i,o,p,s,x;
	puts("Enter the string : ");
	fgets(a,sizeof a,stdin);
	puts("Enter the sub string : ");
	fgets(b,sizeof b,stdin);
	puts("Enter the position : ");
	scanf("%d",&p);
	r = strlen(a);
	n = strlen(b);
	i=0;
	while(i<=r){
		c[i]=a[i];
		i++;
	}
	s = n+r;
	o = p+n;
	for(i=p;i<s;i++){
		x=c[i];
		if(t<n){
			a[i] =b[t];
			t+=1;
		}
		a[o]=x;
		o+=1;
	}
	puts(a);
}
