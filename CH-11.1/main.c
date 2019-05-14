#include <stdio.h>


/* this section deals with pointers */

int main()
{
    int i=5;
    int *p=&i;
    printf("%d\t%d\t%d\t%d",&i,p,*p,i);
    return 0;
}
