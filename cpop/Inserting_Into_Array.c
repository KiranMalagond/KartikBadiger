#include<stdio.h>
int main(){

int i,j,pos,key=8,n=5;
int a[n];
printf("Enter the %d Array elements= ",n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

printf("Enter the position to insert= ");
scanf("%d",&pos);
//i=pos;
n=n+1;
if(pos>=1 && pos<=n){
for(i=n-1;i>=pos;i--){
    a[i]=a[i-1];

}
a[pos-1]=key;

printf("The %d Array elements= ",n);
for(i=0;i<n;i++){
    printf("%d ",a[i]);
}
}else{
printf("Wrong Index");
}
}
