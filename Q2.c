#include<stdio.h>
int main(){
    int x;
    printf("enter the no\n");
    scanf("%d",&x);
    
    x=x/10;
    printf("no without last digit is : %d",x);
    
    return 0;
}