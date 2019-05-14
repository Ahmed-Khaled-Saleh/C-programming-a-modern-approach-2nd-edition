#include <stdio.h>

int* f();
int main()
{
    int* p=f();
    printf("%p",p);


}
int* f(){
    int i=50;
    return &i;

}
