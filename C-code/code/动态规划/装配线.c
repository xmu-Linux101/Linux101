#include<stdio.h>
int main()
{
	int i,j;
	int n;
	int time;
	int e1,e2,x1,x2;
	int a1[1000];
	int a2[1000];
	int t1[1000];
	int t2[1000];
	int f1[1000];
	int f2[1000];
	scanf("%d",&n);
	scanf("%d%d%d%d",&e1,&e2,&x1,&x2);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a1[i]);
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a2[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		scanf("%d",&t1[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		scanf("%d",&t2[i]);
	}
	f1[1]=e1+a1[1];
	f2[1]=e2+a2[1];
	for(j=2;j<=n;j++)
	{
		if(f1[j-1]+a1[j]<=f2[j-1]+t2[j-1]+a1[j])
			f1[j]=f1[j-1]+a1[j];
		else 
			f1[j]=f2[j-1]+t2[j-1]+a1[j];
		if(f2[j-1]+a2[j]<=f1[j-1]+t1[j-1]+a2[j])
			f2[j]=f2[j-1]+a2[j];
		else
			f2[j]=f1[j-1]+t1[j-1]+a2[j];
	}
	if(f1[n]+x1<=f2[n]+x2)
		time=f1[n]+x1;
	else
		time=f2[n]+x2;
	printf("%d",time);
	return 0;
}
