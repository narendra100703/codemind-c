#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,sum1=0,sum2=0,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum1=sum1+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
          if(i%2==0)
        {
            sum2=sum2+a[i];
        }
    }
     printf("%d",sum2-sum1);

}