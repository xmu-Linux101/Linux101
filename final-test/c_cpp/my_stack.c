/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
typedef struct
{
int *base;
int *top;
int stack_size;

}sqstack;
sqstack s;
void stack_push(int x)
{
  if(s.top-s.base>=s.stack_size)
{
s.base=(int *realloc(s.base,(STACK_INT_SIZE+STACK_INCREMENT)*sizeof(int));
s.top=s.base+s.stack_size;
s.stack_size+=STACKINCREMENT;
}
*s.top++=x;

}
int stack_capacity()
{
if(!stack_is_empty)
{
return STACK_INT_SIZE;
}
else
return 0;
}
int stack_size()
{
return stack_size;
}
int stack_is_empty()
{
if(s.base==s.top)
return 1;
else 
return 0;

}
int stack_is_full()
{

if((s.top-s.base)==STACK_INT_SIZE)
return 1;
else
return 0;

}
int stack_pop()
{
if(s.top==s.base)
return 0;
else
return (*--s.top);

}
