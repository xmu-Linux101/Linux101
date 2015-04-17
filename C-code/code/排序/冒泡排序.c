#include <stdlib.h> 
#include <stdio.h> 
#include <time.h> 
#define MAX 1000

int main() 
{  
	int i,j,temp,N;
	int a[10000];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		a[i]=rand(); 
	}
	for(i=0;i<N;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	for(i=0;i<N;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;

}



