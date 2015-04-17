#include <stdlib.h> 
#include <stdio.h> 
int N;
int main()
{
	int i,j,temp,k;
	int a[10000]={0};
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		a[i]=rand(); 
	}
	for(i=1;i<=N;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");

	for(i=1;i<N;i++)
	{
		k=i;
		for(j=i+1;j<=N;j++)
		{
			if(a[j]<a[k])
			{
			k=j;
			}
		temp=a[k];
		a[k]=a[i];
		a[i]=temp;
		}
	}
	for(i=1;i<=N;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}



