#include<stdio.h>
int main(){
    int x,y;
    printf("enter the no\n");
    scanf("%d",&x);
    
    y=x%10;
    printf("unit digit is : %d",y);
    
    return 0;
}