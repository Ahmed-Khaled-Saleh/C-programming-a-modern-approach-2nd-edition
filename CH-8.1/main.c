#include <stdio.h>
#include <stdbool.h>
#define ARR_LEN 10

//reversing a series of numbers using an array

main()
{
    /*
    int n,i;int a[ARR_LEN];
    printf("Enter 10 numbers : ");
    for(i=0;i<ARR_LEN;i++)
        scanf("%d",&a[i]);
    printf("In reverse order: ");
    for(i=ARR_LEN-1;i>=0;i--)
        printf("%d\t",a[i]);
    */

    // a program to test for repeated digits in a number


    bool digit_seen[10]={false};
    long n;
    int digit=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    while(n>0){
        digit=n%10;
        if(digit_seen[digit])
            break;
        digit_seen[digit]=true;
        n=n/10;
    }
    if(n>0) printf("Repeated Digit\n");
    else printf("No Repeated Digit\n");






}
