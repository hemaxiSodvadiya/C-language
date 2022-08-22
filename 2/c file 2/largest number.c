#include<stdio.h>

void main()
{

   int a,b,c,d,largest;

   printf("Enter four number\n");
   scanf("%d %d %d %d",&a,&b, &c, &d);

   largest = ( (a>b && a>c && a>d) ? a 
                                   : (b>c && b>d) ? b
								                  : (c>d)? c 
												          : d
														       );

 
   printf("largest Number is:- %d",largest);

}
