#include<stdio.h>
main()
{
	char a[100];
	int i,j;
	int upper=0,lower=0,digit=0,special=0;
	printf("enter string=");
	gets(a);
	j=strlen(a);
	if(j>=6)
	{
		for(i=0;i<j;i++)
		{
			if(a[i]>='a' && a[i]<='z')
			lower++;
			
			if(a[i]>='A' && a[i]<='Z')
			upper++;
			
			if(a[i]>='0' && a[i]<='9')
			digit++;
			
			if((a[i]>=33 && a[i]<=47) || (a[i]>=58 && a[i]<=64) || (a[i]>=91 && a[i]<=96) || (a[i]>=123 && a[i]<=255))
			special++;
		}
		
	}
	if(upper>0 && lower>0 && digit>0 && special>0)
		{
			printf("vaild password");
		}
		else
		{
			printf("Invaild");
		}
}















