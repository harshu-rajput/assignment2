#include<stdio.h>
int main(){
    int x,y;
    printf("enter the first no :\n");
    scanf("%d",&x);

    printf("enter the second no :\n");
    scanf("%d",&y);

   x=x+y;
   y=x-y;
   x=x-y;
 
    printf(" now first no is : %d",x);
    printf(" now second no is : %d",y);
    
    return 0;
}