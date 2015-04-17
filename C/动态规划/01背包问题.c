#include<stdio.h>
int V[200][200];
int max(int a,int b)
{
   if(a>=b)
       return a;
   else return b;
}

void KnapSack(int n,int w[],int v[],int x[],int C)
{
    int i,j;
    for(i=0;i<=n;i++)
        V[i][0]=0;
    for(j=0;j<=C;j++)
        V[0][j]=0;
    for(i=0;i<=n-1;i++)
	{
        for(j=0;j<=C;j++)
		{
            if(j<w[i])
			{
                V[i][j]=V[i-1][j];
			}
            else
			{
                V[i][j]=max(V[i-1][j],V[i-1][j-w[i]]+v[i]);
			}
		}
	}
     j=C;
     for(i=n-1;i>=0;i--)
     {
		if(V[i][j]>V[i-1][j])
        {
          x[i]=1;
          j=j-w[i];
        }
        else
            x[i]=0;
     } 
	int k=0;
	for(i=0;i<=n-1;i++)
	{
		if(x[i]==1)
		{
			k++;
		}
	}
	printf("%d\n",k);
	for(i=0;i<=n-1;i++)
	{
		if(x[i]==1)
		{
			printf("%d ",i+1);
		}
	}
	printf("\n");
}

int main()
{

    int w[100];
    int v[100];
    int x[100];
    int n,i;
    int C;
    scanf("%d",&n);
    scanf("%d",&C);
    for(i=0;i<n;i++)
        scanf("%d",&w[i]);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    KnapSack(n,w,v,x,C);
	return 0;
}