#include <stdio.h>

/**************************************************
*name: main.c                                     *
*purpose: compute the Dimensional wight of a box  *
*Author:K.King                                    *
*Date Written: 20/2/2019                          *
**************************************************/

main()
{

    int height,weight,volume,length,width;
    printf("enter height of a box: ");
    scanf("%d",&height);
    printf("enter length of a box: ");
    scanf("%d",&length);
    printf("enter width of a box: ");
    scanf("%d",&width);
    volume=height * length * width;
    weight=(volume +165) / 166;
    printf("volume (cubic inches) : %d\n",volume);
    printf("Dimensional weight (pounds): %d\n",weight);
    exit(0);
}
