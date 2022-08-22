#include <stdio.h>
int sum(int arr[], int start, int len);
int main()
{
    int arr[100];
    int n,i,total;
    printf("Enter array=");
    scanf("%d", &n);
    printf("Enter elements =");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    
    total= sum(arr,0,n);
    printf("Sum =%d",total);
    
}
int sum(int arr[], int start, int len) 
{
    if(start >= len)
    return 0;
    return(arr[start] + sum(arr, start + 1, len));
}











