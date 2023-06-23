#include<stdio.h>
int main(){

    // alternate way
    int x;

    printf("enter a no : \n");
    scanf("%d",&x);
     x=x/10;
     x=x*10;
    printf(" no with last digit 0 : %d",x);


  /* method by taking modulo
  int x,y;

    printf("enter a no");
    scanf("%d",&x);

    y=x%10;
    x=x-y;

    printf(" no with last digit 0 : %d",x);*/
    return 0;
}