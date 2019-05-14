#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n){
    int i=n-1;
    while(i>1){
        if(n%i==0) return false;
        i--;
    }
    return true;
}

main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(is_prime(n))
        printf("PRIME\n");
    else
        printf("NOT PRIME\n");

}
