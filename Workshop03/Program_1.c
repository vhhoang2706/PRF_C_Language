#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prime(int n)
{
	int m=sqrt(n);
	int i;
	if (n<2) 
	{
		return 0;
	} else
	for (i=2;i<=m;i++)
	{
		if (n%i==0) 
		{
			return 0;
			break;
		} 
	}
	return 1; 
}

int main()
{
	int n,i;
	do
	{
		printf("Enter n = "); scanf("%d",&n);
	} while (n<2);
	for (i=2;i<=n;i++)
	{
		if (prime(i)==1)
		{
			printf("%d ",i);
		}
	}
}