#include<stdio.h>
main()
{
	int i,j,r,c,sum=0;
	printf("enter r &c=");
	scanf("%d %d",&r,&c);
	int a[10][10];
	printf("enter your elments=");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",i,j);
			
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   if(i==j)
		   {
		   	 sum=sum+a[i][j];
		   	
		   }
			
		}
	  printf("output=%d",sum); 
	  printf("\n");	
	}
}

