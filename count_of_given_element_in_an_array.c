#include<stdio.h>
int main()
{
    int N,n;
     scanf("%d",&N);   
    int ar[N],i,count=0; 
    for(i=0;i<N;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&n);
    for(i=0;i<N;i++)
    {
      if(ar[i]==n)
      {
          count++;
      }
    }
    printf("%d",count);
}