#include <stdio.h>


main()
{
    int i,j;
    int a[5][5];
    for(i=0;i<5;i++){
            printf("Enter row %d : ",i+1);
            for(j=0;j<5;j++)
                scanf("%d",&a[i][j]);
    }

    /* just print the array to show its content ;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
    */
    int sum=0;
    int sum_rows[5];
    int sum_columns[5];
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            sum+=a[i][j];
        sum_rows[i]=sum;
        sum=0;
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            sum+=a[j][i];
        sum_columns[i]=sum;
        sum=0;
    }

    printf("Row totals :");
    for(i=0;i<5;i++)
        printf("%d  ",sum_rows[i]);

    printf("\nColumn totals :");
    for(i=0;i<5;i++)
        printf("%d  ",sum_columns[i]);

}
