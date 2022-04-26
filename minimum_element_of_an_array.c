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
    int s=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<s)
        s=a[i];
    }
    printf("%d",s);
}