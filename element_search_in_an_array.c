#include<stdio.h>
int search(int *ar,int n,int se)
{
   	int i;
	for(i=0;i<n;i++)
	{
		if(ar[i]==se)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],se,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&se);
    if(search(ar,n,se))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}