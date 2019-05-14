#include <stdio.h>


/*
*Author : Ahmed Khaled Saleh
*Output : computes the sum of odd numbers between 1 and 100;
*/

int main()
{
    int i=0;int s=0;
    while(++i<=100){
        if(i%2==0) s+=i;
    }
    printf("%d\n",i);

    printf("%d\n",s);

}
