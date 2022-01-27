#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,iv;
    float fv;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
           fv=sqrt((double)arr[i]);
    iv=fv;
    if(fv==iv)
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}