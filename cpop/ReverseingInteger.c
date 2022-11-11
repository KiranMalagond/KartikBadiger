#include<stdio.h>
int main(){

int a,rem,r;

printf("Enter the Integer value\n");
scanf("%d",&a);

while(a>0){
    rem=a%10;
    r=(r*10)+rem;
    a=a/10;
}

printf("\nReversed = %d\n",r);

}
