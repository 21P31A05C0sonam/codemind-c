#include<stdio.h>
int main()
{
    int r,n,sum,sqr;
    scanf("%d",&n);
    sum=0;
    sqr=n*n;
    while(sqr!=0)
    {
        r=sqr%10;
        sum=sum+r;
        sqr=sqr/10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}