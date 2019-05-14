#include <stdio.h>


int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},*p;
    //p=&a[0];
    //*p=5;
    //printf("%d",a[0]);
    /*
    generally , C supports 3 types of pointer Arithmetic :
    1-Adding integer to a pointer .
    2-Subtracting Integer from a pointer .
    3-Subtracting Pointer from another pointer .
    */
    //int *q=p+3;
    //*q=1;
    //printf("\n%d",a[3]);
    //printf("\n%d",q-p);
    //*p=0;
    int i=0;
    for(p=&a[0];p<&a[10];p++)
        {
            i+=*p;
            printf("%d\t",i);
        }
    return 0;
}
