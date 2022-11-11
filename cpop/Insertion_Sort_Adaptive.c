#include<stdio.h>


void Insert(int A[],int n){
    int i,j,x;
    for(i=1;i<n;i++){
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
    }
}

int main(){
int A[]={2,6,8,4,3,5};
int n=6,i;

Insert(A,n);

for(i=0;i<n;i++){
    printf("%d ",A[i]);
}
}
