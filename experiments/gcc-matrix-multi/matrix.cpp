#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdio>
using namespace std;
#define max 102

int main()
{
	double time_start,time_end;
	int a[max+1][max+1],b[max+1][max+1],c[max+1][max+1];
	memset(c,0,sizeof(c));
	memset(a,1,sizeof(a));
	memset(b,1,sizeof(b));
	time_start=clock();
	for(int i=1;i<=max;i++)
		for(int j=1;j<=max;j++)
			for(int k=1;k<=max;k++)
				c[i][j]+=a[i][k]*b[k][j];
	time_end=clock();
	printf("the cost time:%f\n",(time_end-time_start)/1000.);
	return 0;
}
