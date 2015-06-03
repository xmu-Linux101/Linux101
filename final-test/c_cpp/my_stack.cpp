/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */

#include <iostream>
#include "include/my_stack.h"

const int capacity=10;
int MY_STACK_H[capacity]={0};
int size=-1;

void stack_push(int x){
	if (size < capacity) MY_STACK_H[++size]=x;	
}

int stack_pop(){
	if (size > -1) return MY_STACK_H[size--];
}

int stack_capacity(){
	return capacity;
}

int stack_size(){
	return size;
}

int stack_is_empty(){
	if (size==-1) return 1;
	else return 0;
}

int stack_is_full(){
	if (size == capacity-1) return 1;
	else return 0;
}

