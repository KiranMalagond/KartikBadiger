#include<stdio.h>
int fun(int*);
int a=10;
int main(){
int b;
b=fun(&a);
printf("\n%d ",b);
}

int fun(int *x){
  (*x)++;
  return *x+*x;
}
