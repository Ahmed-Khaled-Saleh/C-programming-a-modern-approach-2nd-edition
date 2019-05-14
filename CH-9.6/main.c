#include <stdio.h>
#include <stdlib.h>
//note the following odd appearance ,but still legal
//int power();//we provide no info about power's parameters
int main()
{
    //printf("%d",fact(5));
    // we can put a function's declaration inside another function
    int power();
    printf("%d",power(2,10));
    exit(0);
}

int fact(int n){

    if(n==1)
        return 1;
    else
        return n*fact(n-1);

}
int power(int n,int p){

    if(p==1) return n;
    else return n*power(n,p-1);

}

