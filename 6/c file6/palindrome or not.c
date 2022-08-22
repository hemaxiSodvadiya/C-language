#include <stdio.h>
int main()
{
    char a[100],p[100];
    int r;
    printf("Enter string=");
    gets(a);
    strcpy(p,a);
    strrev(p);
    r=strcmp(a,p);
    if(r==0)
    {
    	printf("palindrome");
	}
	else
    {
    	printf(" not palindrome");
	}
}


