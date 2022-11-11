#include<stdio.h>
int main(){
int a,rem,r,b;

printf("Enter the Integer value\n");
scanf("%d",&a);
b=a;
while(a>0){
     rem=a%10;
    r=(r*10)+rem;
    a=a/10;
}
if(r==b){
    printf("Palindrome\n");

}else{
printf("Not a Palindrome");
}
}
