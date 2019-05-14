#include <stdio.h>
#include <stdlib.h>

int power(int,int);
int main()
{
    printf("%d",power(3,10));


}
/*
int power(int b,int p){
    //if p is even then use x^n=x^n/2 * 2;
    if(p%2==0){
        if(p==1) return b;
        else return power(power(b,p/2),2);
    }
    else{
        if(p==1) return b;
        else return power(b,p)*power(b,p-1);
    }


}*/
int power(int b,int p){
    int n;
    if(p==1) return b;
    else {
            if(p&1){
                n=power(b,(p-1));
                return b*n;
            }
        else{
                n=power(b,p/2);
                return n*n;

        }
    }

}
