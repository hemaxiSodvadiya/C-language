#include<stdio.h>
#include<conio.h>
main()
{
  int n,i,r,sum;
	   
  printf("enter else=");
  scanf("%d",&n);
  i=n;
  sum=0;
  while(n>0)
  {
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
  }
  if(sum==i)
    {
     printf("palindrome number");

    }
  else
    {
      printf("not palindrome number");
    }
	      getch();
}









