#include<stdio.h>
main()
{
 int i,n,c,j,m,pos,v;
 int a[50];

 printf("enter array size::\n");
 scanf("%d",&n);
 
 
 printf("enter array element::\n");	
 for(i=0;i<n;i++)
 {

 	scanf("%d",&a[i]);
 }
 
 printf("enter 1 for insert\t2for delete\t3 for update\n");
 scanf("%d",&m);
 
switch(m)
{
case 1:
printf("enter insert ::\n");
scanf("%d",&pos);	
	
printf("enter  insert::\n");
scanf("%d",&v);	

for(i=n-1;i>n;i--)
{
	a[i+1]=a[i];
}
a[pos] = v;
n++;

for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
break;

case 2:
	   
printf("enter delete ::\n");
scanf("%d",&v);

for(i=0;i<n;i++)
{
	if(a[i]==v)
	{
		for(j=i+1;j<n;j++)
		{
			a[j] = a[j+1];
		}
		n--;
	}
	
}
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
break;

case 3:
	printf("enter which position you want to update ::\n");
scanf("%d",&pos);	
	
printf("enter value you want to update::\n");
scanf("%d",&v);	

if(pos>n+1)
	{
		printf("is not posiblie");
	}
	else
	{
		for(i=n;i>pos-1;i--)
		{
			a[i+1]=a[i];
			a[pos-1]=a[v];
		}
		
		for(i=0;i<=n;i++)
		{
			printf("output=%d\n",a[i]);
		}
	}
break;


}



}

