#include<stdio.h>
main()
{
	int i,j,n,f[10],c;
	printf("enter elements=");
	scanf("%d",&n);
	int a[n];
	printf("enter elements numbers=");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
		f[i]=f[i]-1;
	}

	for(i=0;i<n;i++)
	{
		c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				f[j]=0;
			}
		}
		if(f[i]!=0)
		{
			f[i]=c;
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(f[i]!=0)
		{
			printf("number=%d frequency=%d\n ",a[i],f[i]);
		}
		printf("\n");
	}
}

