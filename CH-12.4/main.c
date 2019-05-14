#include <stdio.h>

/*Pointers and MultiDimensional Array*/

void make_row_zero(int a[],int n);
int find_large_ele(int a[],int n);

int main()
{
    int a[3][3]={{1,2,3},{2,0,4},{3,6,1}};
    int *p;
    //with pointers we can iterate over 2-D Arrays using one loop only;
    for(p=&a[0][0];p<=&a[2][2];p++)
        printf("%d\t",*p);
    //How about iterate over a specific row of a 2-D Array
    //for(p=&a[0][0];p<a[0]+3;p++)
        //*p=0;
        //we can pass a row of a 2-D array to a function expects one-D array
    //make_row_zero(a[0],3);
/*
    printf("\n");
    for(p=&a[0][0];p<=&a[2][2];p++)
        printf("%d\t",*p);
*/
    int max=find_large_ele(a[0],3);
    printf("\n%d",max);

}

void make_row_zero(int a[],int n){
    int *p;
    for(p=a;p<&a[n];p++)
        *p=0;


}
int find_large_ele(int a[],int n){

    int max_num,*p;
    p=a;
    *p=max_num;
    for(p=a+1;p<&a[n];p++){
        if(*p>max_num)
            max_num=*p;
    }
    return max_num;

}
