#pragma once
#include "Header.h"
class Stack
{
private:
	int size;
	char* stack;
	int top;
public:
	Stack(int size);
	~Stack();
	void push(char c);
	char pop();
	int count();
	bool isEmpty();
	bool isFull();
	void clear();
	char topEl();
};
