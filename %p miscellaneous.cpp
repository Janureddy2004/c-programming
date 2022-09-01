#include<stdio.h>
#include<stdlib.h>
//hexa decimal number - the memory address looks like hexadecimal number so we use %p
//Hexa decimal address is applicable for aall kind of data types & it is not applicable for array.

int main(){
	long scores[5]={1,2,3,4};
	for(int i = 0;i<5;i++){
		printf("%ld %p\n",&scores[i],&scores[i]);
	}
}
