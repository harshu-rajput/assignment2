#include<stdio.h>
int main(){
     
int x,y,z;

printf("enter three digit no :\n");
scanf("%d",&x);
     
     y=x%10;
     z=x/10;
    //  y=y*100;

    //  printf("new no : %d",(z+y));
     
     printf("%d%d",y,z);
    return 0;
}