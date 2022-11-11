#include<stdio.h>
int main(){
int a[10]={1,2,3,4,5,6,7,8,9,10};
int key,i,count=0;

printf("Enter the key element to be search=");
scanf("%d",&key);

for(i=0;i<10;i++){
        count++;
    if(key==a[i]){
        break;
    }else{
    continue;
    }
}
if(i<10){
    printf("\nKey Found");
    printf("\nCount of %d",count);
}else{
printf("\nKey not Found");
}
}
