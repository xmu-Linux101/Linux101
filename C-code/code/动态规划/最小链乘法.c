#include<stdio.h>
#define a 1000000000
int main()
{
	int n;
	int i,j,k,c,q;
	int p[200];
	int m[200][200];
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&p[i]);
	}
	for(i=1;i<=n;i++)
	{
		m[i][i]=0;
	}
	for(c=2;c<=n;c++)
	{
		for(i=1;i<=n-c+1;i++)
		{
			j=i+c-1;
			m[i][j]=a;
			for(k=i;k<=j-1;k++)
			{
				q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
				if(q<m[i][j])
				{
					m[i][j]=q;
				}
			}
		}
	}
	printf("%d",m[1][n]);
	return 0;
}
