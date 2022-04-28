#include<stdio.h>
int search(int *ar,int N,int se,int avg)
{
    int i;
    for(i=0;i<N;i++)
    {
       if(se==i)
        {
          return 1;
        }
    }
    return 0;
}
int main()
{
    int N;
     scanf("%d",&N);   
    int ar[N],i,sum,se,avg=0; 
    for(i=0;i<N;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<N;i++)
    {
    sum=sum+ar[i];
    }
    avg=sum/N;
    scanf("%d",&se);
    if(search(ar,N,avg,se))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}