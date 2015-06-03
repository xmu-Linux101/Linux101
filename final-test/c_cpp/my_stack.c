stack *initStack(stack *s)
{
	 s->base=(char*)malloc(STACK_INIT_SIZE *sizeof(char);
	  if(NULL==s)
		   {
			     exit(-1);
			      }
	    s->top=s->base;
	    s->stacksize=STACK_INIT_SIZE；
}

stack * destoryStack(stack *s)
{
	 
	 if(NULL==s->base)
		  {
			    return ;
			     }
	  
	  free(s->base);
	   s->top=s->base=NULL;
	    s->stacksize=0;
	     return s;
}

//清空栈
stack *clearStack(stack *s)
{
	 if(NULL==s->base)
		  {
			    printf("\n Sorry, stack does not exist！\n");
			      return ;
			       }
	  s->top=s->base;
	   return s;
}
char getStackElem(stack *s)
{
	 
	 char topElem;
	  if(s->top=s->base)
		   {
			     printf("栈中没有可以被取的元素！\n");
			       return ;
			        }
	   topElem=*(s->top--);
	    return topElem;
}
//进栈操作
stack *push(stack *s,char elem)
{
	 if((s->top-s->base)>STACK_INIT_SIZE)
		  {
			    s->base=(char*)realloc(s->base,(STACKINCRENMENT+STACK_INIT_SIZE)*sizeof(char));
			      if(NULL==s->base)
				        {
						   return;
						     }
				  s->top=s->base+s->stacksize;
				  s->stacksize+=STACKINCRENMENT;
				   }
	  *(s->top)=elem;
	   s->top++;
	    return s;

}

char pop(stack *s)
{
	 char elem;
	  if(s->top==s->base)
		   {
			      exit(-1);
			       }
	   s->top--;
	    elem=*(s->top);
	     return elem;

}
