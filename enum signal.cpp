#include<stdio.h>
#include<stdlib.h>
//The enum is a user-defined data type in c.
//It is mainly used to assign names to integral constants which makesa program easy to read and maintain.
enum traffic{
	RED,YELLOW,GREEN
};
int main(){
	enum traffic signal;
	signal = RED;
	switch(signal){
		case RED:
			puts("Stop ");
			break;
		case YELLOW:
			puts("Wait");
			break;
		case GREEN:
			puts("GO");
			break;
	}
}
