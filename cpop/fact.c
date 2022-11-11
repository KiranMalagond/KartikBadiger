#include<stdio.h>
int main(){
int i,j;
for(i=5;i<=10;i++){
        int fact=1;
    for(j=1;j<=i;j++){
        fact=fact*j;
    }
    printf("%d\n",fact);
}


}
