#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 
#define MAX 1000
void QSort(int a[],int low,int high);
int partition(int a[],int low,int high);
int main()
{
	int i,N;
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
	QSort(a,1,N);
	for(i=1;i<=N;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}

void QSort(int a[],int low,int high)
{
	int key;
	if(low<high)
	{
		key=partition(a,low,high);
		QSort(a,low,key-1);
		QSort(a,key+1,high);
	}
}

int partition(int a[],int low,int high)
{
	int key;
	a[0]=a[low];
	key=a[low];
	while(low<high)
	{
		while(low<high&&a[high]>=key)
			high--;
		a[low]=a[high];
		while(low<high&&a[low]<=key)
			++low;
		a[high]=a[low];
	}
	a[low]=a[0];
	return low;

}



