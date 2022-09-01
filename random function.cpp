#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
int main(){
	int a;
	srand(time(NULL));
	a = (rand()%6)+1;
	puts("Rolling dice ....");
	usleep(2000000);
	printf("%d\n",a);
}
