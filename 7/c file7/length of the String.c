#include<stdio.h>
int strlen(char str[30]);
int main()
{
 char a[30];
 int i, len;

 printf("Enter string=\n");
 gets(a);

 len =strlen(a); 
 printf("Length=%d", len);

 return 0;
}


int strlen(char a[30])
{
 int i, len=0;

 for(i=0;a[i]!='\0';i++)
 {
  len++;
 }

 return(len);
}




