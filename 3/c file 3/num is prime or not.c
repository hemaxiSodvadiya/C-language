#include<stdio.h>
#include<conio.h>
main()
{
  int i,j,n;
		  
  printf("enter numbers=");
  scanf("%d",&n);
  j=0;
  j=n/2;
  for(i=2;i<=n;i++)
  {
    if(n%i==0)
    {
      printf("not prime number");
      break;
    }
    else
    {
      printf("prime number");
      break;
    }
  }
		   getch();
}










