#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 
#define MAX 1000
int N;
void Shellsort(int a[],int dlta[],int t);
void Shellinsert(int a[],int dk);
int dlta[10]={5,4,3,2,1};
int main()
{
	int i;

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
	Shellsort(a,dlta,5);
	for(i=1;i<=N;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
void Shellsort(int a[],int dlta[],int t)
{
	int k;
	for(k=0;k<t;++k)
	{
		Shellinsert(a,dlta[k]);
	}
}

void Shellinsert(int a[],int dk)
{
	int i,j;
	for(i=dk+1;i<=N;i++)
	{
		if(a[i]<=a[i-dk])
		{
			a[0]=a[i];
			for(j=i-dk;j>0&&a[0]<=a[j];j-=dk)
			{
				a[j+dk]=a[j];
			}
			a[j+dk]=a[0];
		}
	}
}

