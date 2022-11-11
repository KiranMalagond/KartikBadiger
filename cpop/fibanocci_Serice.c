#include<stdio.h>
int main(){
int a=0,b=1,c=0,i;

 printf("\n%d",a);
 printf("\n%d",b);


for(i=0;i<10;i++){
    c=a+b;
    printf("\n%d",c);
    a=b;
    b=c;
}

}
