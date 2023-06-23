#include<stdio.h>
int main(){
    int a,x,y,z,sum;
    printf("enter three digit no :\n");
    scanf("%d",&a);

    x=a%10;
    y=(a/10)%10;
    z=a/100;

    sum=x+y+z;
    printf("%d",sum);
    

    return 0;
}