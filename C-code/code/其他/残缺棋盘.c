#include<stdio.h>
#include<math.h>
int a[1030][1030];
int tile=0;


int TileBoard(int tr,int tc,int dr,int dc,int size);
int main()
{
	int n;
	int dr,dc;
	int i,j;
	scanf("%d",&n);
	scanf("%d%d",&dr,&dc);
	TileBoard(0,0,dr-1,dc-1,pow(2,n));
	for(i=0;i<pow(2,n);i++)
	{
		for(j=0;j<pow(2,n);j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
int TileBoard(int tr,int tc,int dr,int dc,int size)
{
	int t;
	int s;
	if(size==1)
		return 1;
	tile=tile+1;
	t=tile;
	s=size/2;
	if(dr<tr+s&&dc<tc+s)
		TileBoard(tr,tc,dr,dc,s);
	else
	{	
		a[tr+s-1][tc+s-1]=t;
		TileBoard(tr,tc,tr+s-1,tc+s-1,s);
	}
	if(dr<tr+s&&dc>=tc+s)
		TileBoard(tr,tc+s,dr,dc,s);
	else
	{	
		a[tr+s-1][tc+s]=t;
		TileBoard(tr,tc+s,tr+s-1,tc+s,s);
	}
	if(dr>=tr+s&&dc<tc+s)
		TileBoard(tr+s,tc,dr,dc,s);
	else
	{	
		a[tr+s][tc+s-1]=t;
		TileBoard(tr+s,tc,tr+s,tc+s-1,s);
	}
	if(dr>=tr+s&&dc>=tc+s)
		TileBoard(tr+s,tc+s,dr,dc,s);
	else
	{	
		a[tr+s][tc+s]=t;
		TileBoard(tr+s,tc+s,tr+s,tc+s,s);
	}
}
