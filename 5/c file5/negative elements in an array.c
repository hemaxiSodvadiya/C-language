#include<stdio.h>
main()
{
	int i,n,a[10];
	printf("enter elements=");
	scanf("%d",&n);
	printf("enter elements numbers=");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("negative elements=%d\n",a[i]);
		}
	}
	printf("\n");
}

