#include "Stack.h"

Stack::Stack(int size)
{
	this->size = size;
	stack = new char[size];
	top = -1;
}

Stack::~Stack()
{
	delete[] stack;
}

void Stack::push(char c)
{
	if (isFull())
	{
		cout << "Stack is full!" << endl;
		return;
	}
	stack[++top] = c;
}

char Stack::pop()
{
	if (isEmpty())
	{
		cout << "Stack is empty!" << endl;
		return 0;
	}
	return stack[top--];
}

int Stack::count()
{
	return top + 1;
}

bool Stack::isEmpty()
{
	return top == -1;
}

bool Stack::isFull()
{
	return top == size - 1;
}

void Stack::clear()
{
	top = -1;
}

char Stack::topEl()
{
	if (isEmpty())
	{
		cout << "Stack is empty!" << endl;
		return 0;
	}
	return stack[top];
}
int main() {
	
	Stack stack(10);
	stack.push('a');
	stack.push('b');
	stack.push('c');
	stack.push('d');
	stack.push('e');
	stack.push('f');
	stack.push('g');
	stack.push('h');
	stack.push('i');
	stack.push('j');
	stack.push('k');
	cout << "Stack count: " << stack.count() << endl;
	cout << "Stack top element: " << stack.topEl() << endl;
	cout << "Stack is full: " << stack.isFull() << endl;
	cout << "Stack is empty: " << stack.isEmpty() << endl;
	cout << "Stack elements: ";
	while (!stack.isEmpty())
	{
		cout << stack.pop() << " ";
	}
	cout << endl;
	cout << "Stack is empty: " << stack.isEmpty() << endl;
	cout << "Stack count: " << stack.count() << endl;
	cout << "Stack top element: " << stack.topEl() << endl;
	cout << "Stack is full: " << stack.isFull() << endl;
	cout << "Stack is empty: " << stack.isEmpty() << endl;
	system("pause");
	return 0;
}