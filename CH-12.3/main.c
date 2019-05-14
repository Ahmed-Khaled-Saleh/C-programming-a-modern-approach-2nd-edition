#include <stdio.h>


int main()
{
    int a[10]={1,2,2,5,6,1,2,3,5,7};
    *a=7;
    *(a+1)=8;
    //printf("%d\t%d\n",a[0],a[1]);
    int* p;
    for(p=a;p<a+10;p++)
        printf("%d\t",*p);

}
