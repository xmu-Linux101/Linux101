#include<stdio.h>
#include<stdlib.h>
#define N 100

struct mark                     //定义迷宫内点的坐标类型 
{ 
	int x; 
	int y; 
}; 

struct Element                 //"恋"栈元素，嘿嘿。。 
{ 
	int x,y;                //x行,y列 
	int d;                  //d下一步的方向 
}; 
typedef struct LStack          //链栈 
{ 
	Element elem; 
	struct LStack *next; 
}*PLStack; 

/*************栈函数****************/ 


int InitStack(PLStack &S)          //构造空栈 
{ 
	S=NULL; 
	return 1; 
} 

int StackEmpty(PLStack S)          //判断栈是否为空 
{ 
	if(S==NULL) 
		return 1; 
	else 
		return 0; 
} 

int Push(PLStack &S, Element e)          //压入新数据元素 
{ 
	PLStack p; 
	p=(PLStack)malloc(sizeof(LStack)); 
	p->elem=e; 
	p->next=S; 
	S=p; 
	return 1; 
} 

int Pop(PLStack &S,Element &e)          //栈顶元素出栈 
{ 
	PLStack p; 
	if(!StackEmpty(S)) 
	{ 
		e=S->elem; 
		p=S; 
		S=S->next; 
		free(p); 
		return 1; 
	} 
	else 
		return 0; 
} 


/***************求迷宫路径函数***********************/ 
void MazePath(struct mark start,struct mark end,int maze[N][N],int diradd[4][2]) 
{ 
	int i,j,d;
	int a,b; 
	Element elem,e; 
	PLStack S1, S2; 
	InitStack(S1); 
	InitStack(S2); 
	maze[1][1]=2; //入口点作上标记 
	elem.x=1; 
	elem.y=1; 
	elem.d=-1; //开始为-1 
	Push(S1,elem); 
	while(!StackEmpty(S1)) //栈不为空 有路径可走 
	{ 
		Pop(S1,elem); 
		i=elem.x; 
		j=elem.y; 
		d=elem.d+1; //下一个方向 
		while(d<4) //试探东南西北各个方向 
		{ 
			a=i+diradd[d][0]; 
			b=j+diradd[d][1]; 
			if(a==end.x && b==end.y && maze[a][b]==0) //如果到了出口 
			{ 
				elem.x=i; 
				elem.y=j; 
				elem.d=d; 
				Push(S1,elem); 
				elem.x=a; 
				elem.y=b; 
				elem.d=886; //方向输出为-1 判断是否到了出口 
				Push(S1,elem); 
				while(S1) //逆置序列 并输出迷宫路径序列 
				{ 
					Pop(S1,e); 
					Push(S2,e); 
				} 
				while(S2) 
				{ 
					Pop(S2,e); 
					printf("(%d,%d)\n",e.x,e.y); 
				} 
				return; //跳出两层循环，本来用break,但发现出错，exit又会结束程序，选用return还是不错滴o(∩_∩)o... 
			} 
			if(maze[a][b]==0) //找到可以前进的非出口的点 
			{ 
				maze[a][b]=2; //标记走过此点 
				elem.x=i; 
				elem.y=j; 
				elem.d=d; 
				Push(S1,elem); //当前位置入栈 
				i=a; //下一点转化为当前点 
				j=b;
				d=-1; 
			} 
			d++; 
		} 
	} 
	printf("没有找到可以走出此迷宫的路径\n"); 
} 


void initmaze(int maze[N][N],int n) 
{ 
	int i,j; 
	printf("\n请输入迷宫的各行各列:\n");
	for(i=1;i<=n;i++) 
		for(j=1;j<=n;j++) 
			scanf("%d",&maze[i][j]); 
	printf("你建立的迷宫为\n"); 
	for(i=0;i<=n+1;i++) //加一圈围墙 
	{ 
		maze[i][0]=1; 
		maze[i][n+1]=1; 
	} 
	for(j=0;j<=n+1;j++) 
	{ 
		maze[0][j]=1; 
		maze[n+1][j]=1; 
	} 
	for(i=0;i<=n+1;i++) //输出迷宫 
	{ 
		for(j=0;j<=n+1;j++)
		{
			printf("%d ",maze[i][j]); 
		}
		printf("\n"); 
		
	} 
}
int main() 
{ 
	int sto[N][N]; 
	int n; //迷宫行 
	printf("请输入迷宫的数 n="); 
	scanf("%d",&n); 
	struct mark start,end; //start,end入口和出口的坐标 
	int add[4][2]={{0,1},{1,0},{0,-1},{-1,0}};//行增量和列增量 方向依次为东西南北 
	initmaze(sto,n);//建立迷宫 
	start.x=1;
	start.y=1; 
	end.x=n;
	end.y=n; 
	MazePath(start,end,sto,add); //find path 
	return 0;
}
