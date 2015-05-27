#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define max  1000
int n=600,s,t;
int a[max][max],b[max][max],c[max][max];
int main()
{
	s=clock();
	int i,j,k;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		a[i][j]=i;
		b[i][j]=j;
	}
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
		for(k=1;k<=n;k++) 
                    c[i][j]+=a[i][k]*b[k][j];
	}
	t=clock();
	double time=(t-s)/1000.0;
	printf("time  is: %lf\n",time);
	return 0;
}

