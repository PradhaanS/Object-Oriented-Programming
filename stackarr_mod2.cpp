//WAP to implement stack using array in C++
#include<iostream>
using namespace std;
#define size 10 //size of stack

int top=-1;
int stack[size]; //intialization of array

void push(int n) //function to push element into stack
{
	if(top==size-1)
	{
		cout<<"Stack is full!!\n";
	}
	else
	{
		top++;
		stack[top]=n;
		cout<<"Element pushed\n";
	}
}

void pop() //function to pop element from stack
{
	if(top==-1)
	{
		cout<<"Stack is empty!!\n";
	}
	else
	{
		top--;
		cout<<"Element deleted\n";
	}
}

void display() //function to print elements of stack
{
	int i;
	if(top==-1)
	{
		cout<<"Stack is empty!!\n";
	}
	else
	{
		
		cout<<"Stack elements are:\n";
		for(i=top;i>=0;i--)
		{
			cout<<stack[i]<<"\n";
		}
	}
}

void peek() //fucntion to print top element of the stack
{
	if(top==-1)
	{
		cout<<"Stack is empty!!\n";
	}
	else
	{
		cout<<"Top element is: \n";
		cout<<stack[top]<<"\n";
	}
}

int main()//main function
{
	push(9);
	push(8);
	push(7);
	display();
	pop();
	peek();
	display();
}
