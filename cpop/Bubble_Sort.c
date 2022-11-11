#include<stdio.h>
int main(){
int i,j,c,n;
int a[n];

printf("Enter the value of n= ");
scanf("%d",&n);


printf("Enter the arr values= ");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

printf("\nArray element are= ");
for(i=0;i<n;i++){
    printf("%d",a[i]);
}

for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
        if(a[j]>a[j+1]){
            c=a[j];
            a[j]=a[j+1];
            a[j+1]=c;
        }
    }
}

printf("\nAfter sorting = ");
for(i=0;i<n;i++){
    printf("%d",a[i]);
}
}
