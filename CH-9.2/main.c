#include <stdio.h>

int averag(int a,int b);
main()
{
    double x,y;
    printf("Enter two numbers : ");
    scanf("%lflf",&x,&y);
    printf("the average of %d and %d is : %d \n",x,y,averag((int)x,(int)y));

}


int averag(int a,int b){

    return (a+b)/2;

}
