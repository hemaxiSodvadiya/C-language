
#include<stdio.h>
#include<conio.h>
main()
{
   int h,m,t;


   printf("Enter h=");
   scanf("%d",&h);
   printf("Enter m=");
   scanf("%d",&m);

   h=h*60;
   t=h+m;

   printf("%d",t);

   getch();
}


