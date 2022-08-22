#include<stdio.h>
#include<conio.h>
main()
{
  int n,fn=0,sn=1,tn=fn+sn,i;

  printf("enter numbers=");
  scanf("%d",&n);

  for(i=0;i<=n;i++)
  {
      printf("%d\t",tn);
      fn=sn;
      sn=tn;
      tn=fn+sn;
  }

	getch();
}


