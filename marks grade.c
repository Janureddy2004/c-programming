#include <stdio.h>
void  main(){
	char student_name[30],section;
	int math,eng,hindi,science,social,marks;
	printf("Enter student name and section : ");
	scanf("%s %c",&student_name,&section);
	printf("Enter th marks of maths,english,hindi,science & social science : ");
	scanf("%d%d%d%d%d",&math,&eng,&hindi,&science,&social);
	marks = math+eng+hindi+science+social;
	if(marks>=450&&marks<=500){
		printf("Grade A\n");
	}
	else if(marks>=400&&marks<=449){
		printf("Grade B\n");
	}
	else if(marks>=350&&marks<=399){
		printf("Grade C\n");
	}
	else if(marks>=300&& marks<=349){
		printf("Grade D\n");
	}
	else if(marks>=200&&marks<=299){
		printf("Grade E\n");
	}
	else{
		printf("Grade F\n");
	}
}


