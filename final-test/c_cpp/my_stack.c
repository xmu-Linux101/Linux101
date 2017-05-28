/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */

#define size 5
int s[size];
int sz=0,top=0;

void stack_push(int x){
	int i;
	for(i=sz;i>top;i--){
		s[i]=s[i-1];
	}
	s[top]=x;
	sz++;
}

int stack_pop(){
	int i;
	int x = s[top];
	for(i=top;i<sz-1;i++){
	s[i]=s[i+1];	
}
	s[sz-1]=0;
	sz--;
	return x;
}

int stack_size(){
	return sz;
}

int stack_is_empty(){
	if(sz==0) return 1;
	else return 0;
}

int stack_is_full(){
	if(sz==5) return 1;
	else return 0;
}


