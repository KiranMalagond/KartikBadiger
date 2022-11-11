#include<stdio.h>
int main(){

struct student{
 char name[10];
 int rollno;
 float marks;
};

struct student s;

printf("\nEnter the name of the Student= ");
scanf("%s",s.name);
printf("\nEnter the Rollno= ");
scanf("%d",&s.rollno);
fflush(stdin);
printf("\nEnter the marks= ");
scanf("%f",&s.marks);

printf("\n%s\t%d\t%0.2f\n",s.name,s.rollno,s.marks);



}
