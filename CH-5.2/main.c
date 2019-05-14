#include <stdio.h>
#include "F:\my libraary\embedded systems\C-programming a modern approach\CH-5.2\exercise5.c"
int main()
{
    //float val;
   // printf("Enter a value : \n");
    ///scanf("%f",&val);
    //a program uses conditional expression to test whether the val i positive and >1000 or not
    //(val > 0.0)?((val>1000.0)?printf("Congratulations ,You are positive and above 1000\n"):printf("Soory,but Yoou aren't sufficent\n")):printf("You don't even meet any of our criteria");
    //exercise 5 =question:4
    int i=5,j=5,z;
    z=(i>j)?1:((i<j?-1:0));
    printf("%d\n",z);
}
