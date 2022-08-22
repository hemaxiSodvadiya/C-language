#include <stdio.h>
#include <string.h>
 
int main()
{
  	char a[100];
  	int i, j, k;
 
  	printf("enter else=");
  	gets(a);
  	 	
  	for(i = 0; i < strlen(a); i++)
  	{
  		for(j = i + 1; a[j] != '\0'; j++)
  		{
  			if(a[j] == a[i])  
			{
  				for(k = j;a[k] != '\0'; k++)
				{
				  a[k] = a[k + 1];
				}
 			}
		}
	}
	
	printf("\n op=> %s ",a);
	
}








