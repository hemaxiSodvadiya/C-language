#include<stdio.h>
float interest(int P,float R, int N)
{
     float SI;
     SI=P*R*N/100.0;
     return SI;
}      
int main()
{
     int p,n,i;
     float r,z;
     for(i=1;i<=1 ;i++)
     {
          printf("  Enter=%d",i);
          printf("\n==========\n");
          printf("Enter Principal Amount=");
          scanf("%d",&p);
          printf("Enter Interest-Rate=");
          scanf("%f",&r);
          printf("Enter Time Period=");
          scanf("%d",&n);
          z=interest(p,r,n);
          printf("\nSimple-Interest==%d=%.2f\n",i,z);
          printf("======================\n");
     }
     
}

