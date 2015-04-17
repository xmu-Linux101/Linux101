#include<stdio.h>
int search(int a,int b[],int N);
int a[100000];
int b[10000];
int main()
{
	int N,M,i,j,k;
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&M);
	for(i=1;i<=M;i++)
	{
		scanf("%d",&b[i]);
	}
	for(j=1;j<=M;j++)
	{
		k=search(b[j],a,N);
		printf("%d\n",k);
	}
	return 0;
}

int search(int a,int b[],int N)
{
	int low,mid,high;
	int i;
		low=1;
		high=N;
		while(low<=high)
		{
			mid=(low+high)/2;
			if(a==b[mid])
				return mid;
			else if(a<b[mid])
				high=mid-1;
			else 
				low=mid+1;
		}
}