#include <stdio.h>
#include <assert.h>
#include <malloc.h>
//#include "stack.h"

#define init_size 10
#define increase_size 10

typedef struct Stack_T{
        int *base,*top;
        int size;
}SQSTACK;


/*初始化一个栈，根据init_size的大小设置栈的大小，返回栈底地址*/
int * init_stack(struct Stack_T* stack){
        stack = (struct Stack_T *)malloc(sizeof(stack));
        if(!stack) exit (0);

        stack->base = (int *)malloc(init_size * sizeof(int));
        if(!stack->base){
                printf("申请空间失败\n");
                exit (0);
        }
        printf("栈底地址 base = %d\n",stack->base);

        stack->top  = stack->base;
        stack->size = init_size;
        printf("base   =     %d\n",stack->base);
        return stack->base;
}

/*入栈，如果超出原有空间则realloc，并将需要压入的数据入栈；若栈没有满，直接入栈*/
int stack_push(struct Stack_T *stack,int elem){
        assert(stack);

        if((stack->top - stack->base) >= stack->size){
//              printf("栈的大小size = %d\n栈顶地址top = %d\n栈定地址base = %d\n栈的长度lenghth = %d\n",stack->size,stack->top,stack->base,sizeof(int*(stack->size + increase_size));
 //     stack->base = (int *)realloc(stack->base,sizeof(int)*(stack->size+increase_size)));
      stack->base=(int *)realloc(stack->base,sizeof(int) * (stack->size=increase_size));
                if(!stack->base){
                        printf("重新申请空间失败...\n");
                        return 0;
                }
                stack->top = stack->base + stack->size;
                stack->size += increase_size;
        }

        *stack->top++ = elem;
        return 1;
}

/*出栈，从栈里面pop出一个元素*/
int stack_pop(struct Stack_T *stack, int *elem){
        assert(stack);

        if(!stack_is_empty(stack)){
                *elem = *--stack->top;
//              printf("%c    %c\n",*elem,*stack->top);
        }

        else {
                printf("栈为空...\n");
                return 0;
                }
        return *elem;
}


/*释放内存*/
int stack_free(struct Stack_T *stack){
        assert(stack);
        free(stack->base);
        free(stack);
        return 1;
}

/*判断栈是否为空*/
int stack_is_empty(){
        if(stack->top==stack->base)
                return 1;
        else
                return 0;
}

/*判断栈是否已满*/
int stack_is_full(){
        if(stack->top-stack->base>=stack->size)
                return 1;
        else
                return 0;
}

int stack_capacity(){
        return stack->size;
}

int stack_size(){
        return (stack->size-stack->top);
}


