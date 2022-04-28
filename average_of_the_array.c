#include<stdio.h>
int main()
{
    int N;
     scanf("%d",&N);   
    int ar[N],i,sum;
    float avg=0; 
    for(i=0;i<N;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<N;i++)
    {
    sum=sum+ar[i];
    }
    avg=(float)sum/N;
    printf("%.2f",avg);
}