#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 
#define MAX 1000
int main()
{
	int i,j,N;
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
	for(i=2;i<=N;++i)
	{
		if(a[i]<a[i-1])
		{
			a[0]=a[i];
			a[i]=a[i-1];
			for(j=i-2;a[0]<a[j];--j)
				a[j+1]=a[j];
			a[j+1]=a[0];
		}
	}
	for(i=1;i<=N;i++)
	{
		printf("%d\n",a[i]);
	}
}

