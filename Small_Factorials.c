#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int i,arr[s];
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<s;i++)
    {
        long long int fact=1,x;
        x=arr[i];
        while(x>0)
        {
            fact=fact*x;
            x--;
        }
        printf("%lld",fact);
        printf("
");
    }

}