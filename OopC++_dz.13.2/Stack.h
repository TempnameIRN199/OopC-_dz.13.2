#pragma once
#include "Header.h"
// Измените стек из первого задания со статического типа на динамический (при нехватке свободного места нужно изменить размер внутреннего массива без потери данных).
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