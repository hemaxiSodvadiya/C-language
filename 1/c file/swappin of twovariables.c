#include<stdio.h>
#include<conio.h>
main()
{
   int a,b;
   
   printf("Enter a =");
   scanf("%d",&a);
   printf("Enter b =");
   scanf("%d",&b);

   a=a+b;
   b=a-b;
   a=a-b;

   printf("a=%d",a);
   printf("\nb=%d",b);

   getch();

}

