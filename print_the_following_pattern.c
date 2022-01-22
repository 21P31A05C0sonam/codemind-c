#include<stdio.h>
int main()
{
    int i,j,row ;
    scanf("%d",&row);
    for(i=row;i>=1;i--)
      {
          for(j=row;j>=1;j--)
          {
          printf("%d ",j);
          }
        printf("
");
      }
    return 0;
}