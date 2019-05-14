#include <stdio.h>

void decompose(double,int*,double*);
void max_min(int a[],int,int*,int*);

int main()
{
    /*
    int p;double q;
    double n=12.25465;
    decompose(n,&p,&q);
    printf("%d\t%lf",p,q);
    */

    int i=0,big,small;
    int a[10];
    for(;i<10;i++)
        scanf("%d",&a[i]);
    max_min(a,10,&big,&small);
    printf("The MAX is : %d\t The MIN is : %d\n",big,small);
    return 0;
}
void decompose(double x,int* int_part,double* frac_part){
    *int_part=(int) x;
    *frac_part=x- *int_part;
}

void max_min(int a[],int n,int *max,int *min){
    int i;
    *max=a[0];
    *min=a[0];
    for(i=1;i<n;i++){
        if(a[i]>(*max))
            *max = a[i];
        if(a[i]<(*min))
            *min = a[i];
    }


}

