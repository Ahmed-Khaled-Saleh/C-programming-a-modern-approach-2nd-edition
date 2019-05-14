#include <stdio.h>
//Variable length array C99 ;

main()
{
    int n,i;
    printf("Enter the number of elements you want : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter an element: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);

}
