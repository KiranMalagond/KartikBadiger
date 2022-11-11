#include<stdio.h>
int main(){
int A[]={4,2,-2,7,5,8,1,3};
int i,j;
int n=8;int f=0;
for(i=0;i<n;i++)
{
   if(A[i]<0)
    {

    for(j=i;j<n;j++)
        {
        A[j]=A[j+1];
        }
   n=n-1;
    }
}
   //n=n-f;
for(i=0;i<n;i++){
    printf("%d ",A[i]);
}

}
