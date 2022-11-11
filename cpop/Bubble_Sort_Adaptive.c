#include<stdio.h>
void swap(int *x,int *y){
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}

void BubbleSort(int A[],int n){
  int i,j,temp;
  int flag;
  for(i=0;i<n-1;i++)
 {
    for(j=0;j<n-i-1;j++)
    {  flag=0;
        if(A[j]>A[j+1]){
                swap(&A[j],&A[j+1]);
            //temp=A[j];
            //A[j]=A[j+1];
            //A[j+1]=temp;
            flag=1;
        }
    }
    if(flag==0){break;}
  }
}

int main(){
int A[]={5,3,8,7,2,1};
int n=6,i;
BubbleSort(A,n);

for(i=0;i<n;i++){
    printf("%d ",A[i]);
}
}
