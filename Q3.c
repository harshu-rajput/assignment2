#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter the first no :\n");
    scanf("%d",&x);

    printf("enter the second no :\n");
    scanf("%d",&y);

    z=y;
    y=x;
    x=z;
 
    printf(" now first no is : %d",x);
    printf(" now second no is : %d",y);
    
    return 0;
}