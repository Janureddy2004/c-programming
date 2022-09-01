#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define str 100
#define ch1 230
int main(){
	char ch[str];
	int ch_freq[ch1];
	int i,max,ascii;
	puts("Enter the string : ");
	fgets(ch,sizeof ch,stdin);
	for(i=0;i<ch1;i++){
		ch_freq[i] = 0;
	}
	i=0;
	while(ch[i] !='\0'){
		ascii = (int)ch[i];
		ch_freq[ascii] += 1;
		i++;
	}
	max = 0;
	for(i=0;i<ch1;i++){
		if(i!=32){
			if(ch_freq[i] > ch_freq[max]){
				max = i;
			}
		}
	}
	printf("The highest frequency of character '%c' repeated %d of times\n",max,ch_freq[max]);
}
