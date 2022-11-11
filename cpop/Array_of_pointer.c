#include<stdio.h>
int main(){
    /*
int a[5]={1,2,3,4,5};
int *p;
int i,k;

p=&a[4];

for(i=5;i>=1;i--){
    printf("\n%d",*p);
p--;
}
*/

int a;
int *p;
p=&a;
printf("Enter the a value= ");
scanf("%d",p);

printf("\n%d",a);
}
