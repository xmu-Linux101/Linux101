#include<stdio.h>
#include<string.h>
struct girlfriends
{
	char name[20];
	int start;
	int end;
}gf;
int count=1;
int main ()
{
	int n;
	int i,j,time;
	char a,aa;
	int starthour,startmin,endhour,endmin;
	girlfriends gf[100],temp;
	char *name[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d%c%d",gf[i].name,&starthour,&a,&startmin);
		gf[i].start=starthour*60+startmin;
		scanf("%d%c%d",&endhour,&aa,&endmin);
		gf[i].end=endhour*60+endmin;
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(gf[i].end>gf[j].end)
			{
				temp=gf[j];
				gf[j]=gf[i];
				gf[i]=temp;
			}
		}
	}
	name[0]=gf[0].name;
	time=gf[0].end;
	j=1;
	for(i=1;i<n;i++)
	{
		if(gf[i].start>time)
		{
			count++;
			name[j]=gf[i].name;
			j++;
			time=gf[i].end;
		}
	}
	printf("%d ",count);
	for(i=0;i<count;i++)
	{
		printf("%s ",name[i]);
	}
	printf("\n");
	return 0;
}
