#include<stdio.h>
int main(){

int a,i,rem;

printf("Enter the Number=");
scanf("%d",&a);

for(i=2;i<a;i++){
    rem=a%i;
    if(rem==0){
        printf("Not a Prime");
        break;
    }
}
if(i==a){
    printf("Prime");
}

}
