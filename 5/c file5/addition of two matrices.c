#include<stdio.h>
main()
{
	int i,n,r,c,j,t,sum=0;
	printf("enter elements r & c =");
	scanf("%d %d",&r,&c);
	int a[10][10],b[10][10];
	printf ("fist array elements=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf ("second array elements=\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=a[i][j]+b[i][j];
			printf("%d ",sum);
		
		}
		printf("\n");
	}
}


