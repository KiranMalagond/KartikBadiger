#include<stdio.h>
int main(){
int a[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int key,startpos=0,endpos=19,midpos,i,count=0;
int l=sizeof(a)/4;
//printf("%d",l);

printf("\nEnter the key element to be search= ");
scanf("%d",&key);
for(i=0;i<l;i++){
if(startpos<=endpos){
        count++;
    midpos=(startpos+endpos)/2;
    if(a[midpos]==key){
        break;
    }else if(key<a[midpos]){
      endpos=midpos-1;
    }else{
     startpos=midpos+1;
    }
}
}
if(startpos<=endpos){
    printf("\nkey Found\n");
}else{
printf("\nKey Not Found\n");
}
printf("\nCount = %d\n",count);
}
