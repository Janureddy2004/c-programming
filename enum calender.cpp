#include<stdio.h>
#include<stdlib.h>
enum calender{
	Jan = 1,feb,mar,apr,may,jun,july,aug,sep,oct,nov,dec
};
int main(){
	enum calender month = jun;
	switch(month){
		case 1:
			puts("JANUARY");
			break;
		case 2:
			puts("FEBUARY");
			break;
		case 3:
			puts("MARCH");
			break;
		case 4:
			puts("APRIL");
			break;
		case 5:
			puts("MAY");
			break;
		case 6:
			puts("JUNE");
			break;
		case 7:
			puts("JULY");
			break;
		case 8:
			puts("AUGUST");
			break;
		case 9:
			puts("SEPTEMBER");
			break;
		case 10:
			puts("OCTOBER");
			break;
		case 11:
			puts("NOVEMBER");
			break;
		case 12:
			puts("DECEMBER");
			break;
	}
}
