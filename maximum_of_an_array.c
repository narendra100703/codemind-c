#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        l=a[i];
    }
    printf("%d",l);
}