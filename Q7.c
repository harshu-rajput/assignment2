#include<stdio.h>
int main(){
int x;
printf("enter the no :\n");
scanf("%d",&x);
/* (x & 1 )? printf("odd"):printf("even"); */
if( x & 1){
    printf("no is odd");
}
else{
    printf("no is even");
}
    return 0;
}