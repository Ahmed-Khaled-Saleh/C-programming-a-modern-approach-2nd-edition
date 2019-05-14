#include <stdio.h>


int main()
{
    int i,j,*p,*q;
    p=&i;
    q=&j;
    *p=1;
    *q=*p;
    //i=j=1;
    printf("%d\t%d",i,j);

}
