#include<stdio.h>
void DPLCSLength(char a[],char b[],int m,int n);
int c[1007][1007];
int main()
{
	int n,m;
	char a[1005];
	char b[1005];
	scanf("%d%d",&n,&m);
	scanf("%s",a);
	scanf("%s",b);
	DPLCSLength(a,b,n,m);
	printf("%d\n",c[n][m]);
	return 0;
}
void DPLCSLength(char a[],char b[],int n,int m)
{
	int i,j;
	for(i=0;i<=n;i++)
	{
		c[i][0]=0;
	}
	for(j=0;j<=m;j++)
	{
		c[0][j]=0;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i-1]==b[j-1])
			{
				c[i][j]=c[i-1][j-1]+1;
			}
			else if(c[i-1][j]>c[i][j-1])
			{
				c[i][j]=c[i-1][j];
			}
			else
			{
				c[i][j]=c[i][j-1];
			}
		}
	}
}

