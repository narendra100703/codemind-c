#include<stdio.h>
int main()
{
    int n,r=0,sum=0,c=0;
    scanf("%d",&n);
    while(n)
    {
        r=(r*10)+(n%10);
        n/=10;
    }
    while(r)
    {
        if(r%10==6 && c==0)
        {
            sum=(sum*10)+9;
            c++;
        }
        else
        sum=(sum*10)+(r%10);
        r/=10;
    }
    printf("%d",sum);
}    