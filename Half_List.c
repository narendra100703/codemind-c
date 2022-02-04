#include<stdio.h>
int main()
{
	int a,i,x;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	x=a;
	for(x;x>a/2;x--)
	{
		printf("%d ",arr[x-1]);
	}
	for(i=0;i<a/2;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}