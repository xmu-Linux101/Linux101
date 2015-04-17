#include<stdio.h>
int max_sub_matrix(int a[][]);
int max_sub_sequence(int array[]);
int a[200][200];
int N;
int main()
{	
	int i,j;
	int max;
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	max=max_sub_matrix(a);
	printf("%d",max);
	return 0;
}
int max_sub_matrix(int a[][])
{
	int total[200][200];
	int result[100];
	int i,j,k;
	int maxnum=-127;
	for(i=1;i<N;i++)
	{
		for(j=0;i<N;j++)
		{
			total[i][j]=total[i][j]+total[i-1][j];
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=i;j<N;j++)
		{
			for(k=0;k<N;k++)
			{
				if(i=0)
				{
					result[k]=total[j][k];
				}
				else
				{	
					result[k]=tatal[j][k]-total[i-1][k];
				}
				int maxx=max_sub_sequence(result);
				if(maxx>maxnum)
					maxnum=maxx;
			}
		}
	}
	return maxnum;
}

int max_sub_sequence(int array[])
{
	int i;
	int max=-127;
	int b[200]={};
	b[0]=array[0];
	for(i=1;i<N;i++);
	{
		b[i]=(b[i]>0))?b[i-1]+array[i]:array[i];
		if(max<b[i])
			max=b[i];
	}
	return max;
}