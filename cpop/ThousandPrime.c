#include<stdio.h>
int main(){
int count=0,i,j,k=0;

for(i=1;i<=100;i++){

    for(j=i-1;j>=1;j--){
       if(i%j!=0){
            k++;

       }
       }
       if(k==i){
        printf("%d ",k);
       }
}

}
