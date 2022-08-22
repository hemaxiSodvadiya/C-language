#include<stdio.h>
int main()
{
  int i,j,n;
  printf("Enter the value");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("\n");
    
    for(j=1;j<=n-i;j++)
    {
       printf("  ");
    }
    for(j=n;j>n-i;j--)
    {
       printf(" %d",j);
    }
    for(j=n-i+2;j<n+1;j++)
    {
       printf(" %d",j);
    }
  }

}
