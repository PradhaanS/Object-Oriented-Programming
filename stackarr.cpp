//WAP to implement stack using array in C++
#include<iostream>
using namespace std;
#define size 10 //size of stack

int top=-1;
int stack[size]; //intialization of array

void push() //function to push element into stack
{
	int n;
	if(top==size-1)
	{
		cout<<"Stack is full!!\n";
	}
	else
	{
		cout<<"Enter the value\n";
		cin>>n;
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
			cout<<stack[i];
		}
	}
}

int main()//main function
{
  int choice;
  while(1)//infinite loop takes input from user till terminated
  {
    cout<<"\n***MAIN MENU*\n\n";
    cout<<"ENETR THE NUMBER\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n";
    cin>>choice;//input from user to choose function
    switch(choice)//to call corresponding function based on user input
    {
      case 1:push();//fucntion call to insert element
      break;
      case 2:pop();//fucntion call to delete element
      break;
      case 3:display();//fucntion call to display elements
      break;
      case 4:exit(0);//fucntion call to terminate program
      default:cout<<"\nWrong selection!!";
    } 
  } 
}
