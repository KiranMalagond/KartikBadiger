#include<stdio.h>
int main(){

    char a,c,i;

    for(i=1;i<=5;i++){
          printf("Enter The Charecter =");
          scanf("%c",&a);
fflush(stdin);
        switch(a){
   case 'a':c++;break;
   case 'A':c++;break;
   case 'e':c++;break;
   case 'E':c++;break;
   case 'i':c++;break;
   case 'I':c++;break;
   case 'o':c++;break;
   case 'O':c++;break;
   case 'u':c++;break;
   case 'U':c++;break;
   case 'default':
    break;

        }

    }
    printf("\nNo of Vowels= %d",c);

}
