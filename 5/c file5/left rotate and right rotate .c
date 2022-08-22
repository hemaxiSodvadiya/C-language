#include<stdio.h>
main()
{
	int i,n,r,j,t;
	printf("enter elements=");
	scanf("%d",&n);
	int a[n];
	printf("enter elements numbers=");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("how many time rotate=");
	scanf("%d",&r);
    for(i=0;i<r;i++)
	{
			t=a[i];
	  for(j=0;j<n-1;j++)
	  {
	  	
	  	
		  a[j]=a[j+1];
		
		 
	  }	
	   a[n-1]=t;
	  
	}
	for(i=0;i<n;i++)
	{
			printf("%d\t",a[i]);
	}

	  printf("\n");


}
