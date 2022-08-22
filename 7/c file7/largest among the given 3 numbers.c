#include <stdio.h>
int bignumber(int a,int b,int c) 
{
    int big;
 if(a>b && a>c)
    big=a;
 else if(b>a && b>c)
    big=b;
 else
    big=c;
      return big;
}
int main()
{
    int a,b,c,output;
    printf("Enter the three numbers=\n");
    scanf("%d%d%d",&a,&b,&c);
    output=bignumber(a,b,c);
    printf("bignumber is=%d\n",output);
    getch();
  
}



