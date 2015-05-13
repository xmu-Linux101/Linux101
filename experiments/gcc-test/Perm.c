#include<stdio.h>
#include"include/perm.h"

void output()
{
	int i=1;
	for(;i<=n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void swap(int i,int j)
{
	int key;
	key=a[i];
	a[i]=a[j];
	a[j]=key;
}

void Perm(int m)
{
	int j;
	if(m==n)
		output();
	else
		for(j=m;j<=n;j++)
		{
			swap(j,m);
			Perm(m+1);
			swap(j,m);
		}
}

void GeneratingPerm()
{
	int i=1;
	for(;i<=n;i++)
		a[i]=i;
	Perm(1);
}
