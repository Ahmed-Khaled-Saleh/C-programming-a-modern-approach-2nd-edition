#include <stdio.h>


main()
{
    //a table of square ofr numbers;
    /*int n,i;
    printf("Enter the number of entries : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\t%d\n",i,i*i);
    }*/

    //print star shape in a hierarchical way;
    /*int i=1,j=5;
    for(;i<=5;i++){
            while(j>=i){
                printf("*");
                j--;
                }
            j=5;
        printf("\n");
    }*/

    // square table without suing any multiplication operators

    int i=1,sqr,odd=3;
    for(sqr=1;i<=10;odd+=2){
        printf("%d\t%d\n",i,sqr);
        i++;sqr+=odd;
    }






}
