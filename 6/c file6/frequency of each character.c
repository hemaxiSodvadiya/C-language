#include <stdio.h>
int main()
{
    char a[100];
    int i, len;
    int f[26];

    printf("Enter string=");
    gets(a);

    len = strlen(a);

    for(i=0; i<26; i++)
    {
        f[i] = 0;
    }

    for(i=0; i<len; i++)
    {
        
        if(a[i]>='a' && a[i]<='z')
        {
            f[a[i] - 97]++;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            f[a[i] - 65]++;
        }
    }

    
    printf("\n======= \n");
    for(i=0; i<26; i++)
    {
        
        if(f[i] != 0)
        {
            printf("'%c' = %d\n", (i + 97),f[i]);
        }
    }

    
}
























