#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int arr[n],i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%lld",sum);
}