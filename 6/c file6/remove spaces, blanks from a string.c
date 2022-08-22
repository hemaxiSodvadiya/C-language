#include <stdio.h>
int main()
{
    char a[100];
    int j,k,i=0;
    printf("Enter string=");
    gets(a);
   while(a[i]!='\0')
   {
   	 k=0;
   	 {
   	 	if(a[i]==' ')
   	 	{
   	 		j=i;
   	 		while(a[j-1]!='\0')
   	 		{
   	 		  a[j]=a[j+1];
			  j++;	
			}
			k=1;
		}
		if(k==0)
		i++;
	 }
	 
   }
   printf("op=>%s",a);
}









