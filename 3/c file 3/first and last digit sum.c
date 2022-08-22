#include<stdio.h>
#include<conio.h>
main()
{
   int fd,ld,n,sum=0;
		    
   printf("enter numbers=");
   scanf("%d",&n);
   ld=n%10;
   while(n>=10)
   {
     n=n/10;
     fd=n;
     sum=fd+ld;
   }
   printf("sum=%d",sum);
		       getch();
}


