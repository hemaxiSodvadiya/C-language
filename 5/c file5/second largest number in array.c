
#include<stdio.h>
main()
{
	int i,j,n,fl;
	printf("enter elements=");
	scanf("%d",&n);
	int a[n];
	printf("enter elements numbers=");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			fl=a[i];
			a[i]=a[j];
			a[j]=fl;
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(i==1)
		{
			printf("second largest=%d",a[i]);
		}
	  printf("\n");	
	}
}






