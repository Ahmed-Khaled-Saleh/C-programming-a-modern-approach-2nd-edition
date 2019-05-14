#include <stdio.h>
// do while looop
/* calculating the number of digit in an integer;*/
main()

{
    int n,numOfDigits=0;
    printf("enter a nonnegative integer: ");
    scanf("%d",&n);
    do{
        n=n/10;
        numOfDigits++;

    }while(n!=0);
    printf("The number has %d digit(s)\n",numOfDigits);


}
