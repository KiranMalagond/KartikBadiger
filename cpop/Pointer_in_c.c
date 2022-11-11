#include<stdio.h>
int main(){

int a=10;
float b=10.5;
char c='K';
int *p;
float *q;
char *t;

p=&a;
q=&b;
t=&c;

printf("\n%c\t%d\t%c\t",c,++t,*t);


}
