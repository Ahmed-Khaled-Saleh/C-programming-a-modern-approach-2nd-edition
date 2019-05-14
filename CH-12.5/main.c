#include <stdio.h>
int* fun2(int n,int m);

int main()
{
    int *p=fun2(3,4);
    printf("%d",*p);


}
//case 1 :  a one-D VLA array pointed by a pointer
void fun(int n){
    int *p;int a[n];
    p=a;

}
int* fun2(int n,int m){
    int a[n][m];
    int* p;
    p=a;
    *p=5;
    return p;

}
