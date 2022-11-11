#include<stdio.h>
int main(){
int i,j,c=0,count=0;

for(i=1;i<=100;i++){
    c=0;
    for(j=2;j<=i/2;j++){
        if(i%j==0){
            c++;
            break;
        }
    }
    if(c==0 && i!=1){
            count++;
        printf("%d ",i);
    }
}
printf("\n\nCount = %d\n",count);
}
