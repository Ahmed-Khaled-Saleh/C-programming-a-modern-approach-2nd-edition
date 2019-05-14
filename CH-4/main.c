#include <stdio.h>


main(){
    /*
    int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,s1,s2,fin;
    printf("Enter the first (single) digit\n");
    scanf("%1d",&d);
    printf("Enter the first group of five digits\n");
    scanf("%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5);
    printf("Enter the second group of five digits\n");
    scanf("%1d%1d%1d%1d%1d",&j1,&j2,&j3,&j4,&j5);
    s1=d+i2+i4+j1+j3+j5;
    s2=i1+i3+i5+j2+j4;
    fin=9-((((3*s1)+s2)-1) % 10);
    printf("Check digit :%d\n",fin);*/
    int a,b=2,c=3,d=4,e=5,f=6;
    a=b+=c++ - d + --e /f;
    printf("%d",a);

}
