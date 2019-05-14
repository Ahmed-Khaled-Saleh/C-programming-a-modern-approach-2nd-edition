#include <stdio.h>
#include <stdlib.h>
//int num_digit();
void swap(int,int);
int main()
{
    //printf("%d",digit(829,3));
    // the famous swap function won't work because of Calling by value method ;
    /*
    int a=5,b=6;
    printf("Before\na = %d\nb = %d\n",a,b);
    swap(a,b);
    printf("After\na= %d\nb= %d\n",a,b);
    */
    pb(7);


}

//exercise 5 ;
int num_digit(int n){
    if(n/10==0) return 1;
    else return 1+num_digit(n/10);
}
// Exercise : 6 ;
int digit(int n,int k){
    int num_of_digits=num_digit(n);
    if(k>n) return 0;
    int i,rem;
    for(i=0;i<k;i++){
        rem=n%10;
        n=n/10;
    }
    return rem;

}
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
//Exercise 19 :
//this mysterious function computes the binary equivalent of n ;
void pb(int n){
    if(n!=0){
        pb(n/2);
        putchar('0' + n%2);
    }


}


