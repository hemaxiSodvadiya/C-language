#include<stdio.h>
#include<conio.h>
main()
{
   int n,c;
	     
   printf("enter numbers=");
   scanf("%d",&n);

   for(c=0;n>0;c++)
   {
    n=n/10;
   }
    printf("cont number=%d",c);
	       getch();
}


