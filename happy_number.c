#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,num,temp,s=0;
    scanf("%d",&num);
    while(s!=1&&s!=4)
    {
        s=0;
        while(num>0)
        {
            j=num%10;
            s+=(j*j);
            num=num/10;
        }
        num=s;
    }
    if(s==1)
    printf("True");
    else
    printf("False");
    return 0;
}