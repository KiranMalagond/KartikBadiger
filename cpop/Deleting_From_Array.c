#include<stdio.h>
int main(){
int key,i,j,n=5;
int a[5]={1,2,3,4,5};


printf("Enter the key element= ");
scanf("%d",&key);

for(i=0;i<n;i++){
    if(a[i]==key){
        break;
    }else{
    continue;
    }
}
if(i<n){
    for(j=i;j<n-1;j++){
        a[j]=a[j+1];
    }
    n=n-1;
    printf("\nAfterr deleter= ");
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
     }
}else{
printf("\nKey not Found");
}

}
