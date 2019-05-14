#include <stdio.h>

//Programming Projects

/*
1-a program asks user to enter a series of numbers
one by one (numbers not only integers) ;when user
enters 0 or a negative number,the program displays
the largest nonnegative number entered
*/
/*
2-write a program asks the user to enter two integers
then calculates and displays their GCD
*/
/*
3-Write a program asks user to enter a fraction ,then
reduces the fractions to lowest terms
*/
/*
8-write a program prints one-month calender.
*/

int main()
{
    /* 1-
    float max=0.0,n;
    while(1){
        printf("Enter a number : ");
        scanf("%f",&n);
        if(n<=0)
            break;
        if(n>max) max=n;
    }
    printf("The Largest number entered was %.2f",max);
    */


    /*int n1,n2,r;
    printf("enter a fractional number\n");
    scanf("%d/%d",&n1,&n2);
    int n3=n1,n4=n2;
    while(n1%n2!=0){
        r=n1%n2;
        n1=n2;
        n2=r;
    }
    //printf("The GCD is : %d",n2);
    printf("In lowest terms: %d/%d",n3/n2,n4/n2);
    */
    int NumOfDays,StartDay;
    printf("Enter number of days in month : ");
    scanf("%d",&NumOfDays);

    printf("Enter the starting day of the week (sun=1 ,sat=7): ");
    scanf("%d",&StartDay);
    int i,c=StartDay;
    //adjust place of the beginning of the month
    for(i=1;i<StartDay;i++){
        printf("\t");
    }

    //now display the rest of the month's days;
    i=1;
    do{
        printf("%d\t",i);c++;
        if(c>7){printf("\n");c=1;}
        i++;

    }while(i<=NumOfDays);


}
