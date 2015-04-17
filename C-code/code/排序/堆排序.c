#include <stdlib.h> 
#include <stdio.h> 
int N;
void Heapsort(int a[]);
void Heapadjust(int a[],int s,int m);
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
	Heapsort(a);
	for(i=1;i<=N;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}


void Heapsort(int a[])
{
	int  i;
	int temp;
	for(i=N/2;i>0;--i)
	{
		Heapadjust(a,i,N);
	}
	for(i=N;i>1;--i)
	{
		temp=a[1];
		a[1]=a[i];
		a[i]=temp;
		Heapadjust(a,1,i-1);
	}
}

void Heapadjust(int a[],int s,int m)
{
	int rc,j;
	rc=a[s];
	for(j=2*s;j<=m;j*=2)
	{
		if(j<m&&a[j]>a[j+1])
			++j;
		if(rc<=a[j+1])
			break;
		a[s]=a[j];
		s=j;
	}
	a[s]=rc;
}
