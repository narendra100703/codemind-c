#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n>100000000 && n<=9999999999)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}