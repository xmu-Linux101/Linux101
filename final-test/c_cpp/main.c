#include<stdio.h>
#include<stdlib.h>
int main()
{
 stack s;
 int i;
 char *elem="acdef";
 char *temp;
 //栈的初始化；
 initStack(&s);
 //插入元素a,b,c,d,e调用push函数
 printf("进栈顺序：\n");
 temp=elem;
 while(*elem!='\0')
 {
	  printf("%3c",*elem);
	  elem++;
 }
 elem=temp;
  while(*elem!='\0')
	   {
		     printf("%3c",*elem);
		       elem++;
		        }
   elem=temp;
     while(*elem !='\0')
	      {
		        push(&s,*elem);
			  elem++;
			   }
      //取出元素,调用pop函数
         printf("\n出栈顺序：\n");
	  //while(s.top!=s.base!=NULL)
	  while(s.top!=NULL && s.base!=NULL)
		   {
			     printf("%3c",pop(&s));
			      }
	   
	   clearStack(&s);

	    return 1;
}
