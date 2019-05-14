#include <stdio.h>
#define bool int
#define False 0
#define True 1

main()
{
    /*
    This piece of code shows the abilities of C99's array designator;
    int i, a[]={4,9,1,8,[0]=5,7};
    //printf("%d",sizeof(a)/4);
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
        printf("%d\t",a[i]);
    */

    /*
    EX:2;
    using chars as arrays' subscripts .

    int i;
    int a[]={1,2,3,5,4};
    char a='a';
    for(i=0;i<5;i++){
            printf("%d\t",a[a-'a']);
            a++;

    }
    */
    /*
    This program discuss the idea of array designators
    EX: 3,4
    int i;
    //long version:
    bool weekend[]={[0]=True,False,False,False,False,False,[7]=True};
    //shorter version
    bool weekend[]={[0]=True,[7]=True,[1]=False};
    for(i=0;i<sizeof(weekend)/sizeof(weekend[0]);i++)
        printf("%d",weekend[i]);

    */

    /*
    Ex: 5 Fibbonacci numbers:
    int i,fib[40];
    fib[0]=fib[1]=1;
    for(i=2;i<sizeof(fib)/sizeof(fib[0]);i++){
        fib[i]=fib[i-1] + fib[i-2];
        printf("%d\t",fib[i]);
    }

    */

    /* EX: 6 Calculators

    //seven segment array must be 2-D to store each possibility from 0->9;

    const int segments[10][7]={
                               {1,1,1,1,1,1,0},
                               {0,0,0,0,1,1,0},
                               {1,1,0,1,1,0,1},
                               {1,1,1,1,0,0,1},
                               {0,1,1,0,0,1,1},
                               {1,0,1,1,0,1,1},
                               {1,0,1,1,1,1,1},
                               {1,1,1,0,0,0,0},
                               {1,1,1,1,1,1,1},
                               {1,1,1,1,0,1,1}

                               };

    //shorter version using array initializer
    const int shorter_segments[10][7]={{1,[0][6]=0}
                                       {0,[1][4]=1,[1][5]=1},
                                       {1,[2][2]=0,[2][5]=0},
                                       {0,1,1,0,0,1,1},//no need here for designators
                                       {1,[4][1]=0,[4][4]=0},
                                       {1,[5][1]=0}
                                       //and so on


                                       };



    //additional feature not required in the exercise
     //this can be achieved via pointers , and we will leave it till now
     int i;
     int segments_values[10];
     for(i=0;i<10;i++) segments_values[i];


    */


    /*Ex: 8,9

    /*first we will declare a 2-D Array where rows represent the 30 days of the month
    and the columns represent the 24 hours of the day .Each single element of the array represents
    a particular temperature of the day i at the hour j .*/

    /*
    i am initializing every element with 22 just for simplicity

    int i,j;
    int temprature_reading[30][24];
    for(i=0;i<30;i++)
        for(j=0;j<24;j++){
            temprature_reading[i][j]=22;
        }
    */
    //just display the array to check for correctness of values
    /*for(i=0;i<30;i++){
        for(j=0;j<24;j++)
            printf("%d ",temprature_reading[i][j]);
        printf("\n");
    }*/


    /*NOW WE WANT TO TAKE THE AVERAGE OF THE VALUES OF THIS ARRAY.THE IDEA IS TO ITERATE OVER THE
    ARRAY USING 2 FOR LOOPS AND DIVIDE THE SUM OF THE ELEMENTS OVER THE MONTH DAYS (30) .*/
    /*int avg,sum=0;

    for(i=0;i<30;i++){
        for(j=0;j<24;j++)
                sum+=temprature_reading[i][j];
        }
    printf("The average of temperature of this month is : %d",sum/30);
    */


    //EX : 10,11 ; chess board ,i think this would be implemented easily for you now .




}
