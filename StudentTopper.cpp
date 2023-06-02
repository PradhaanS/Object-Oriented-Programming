#include<iostream>
using namespace std;
class student
{
	char usn[10];
	char name[25];
	float marks[3];
	
	public:
		float avg;
		void read();
		void display();
		void calc();
};

void student::read()
{
	cout<<"Enter the USN no:";
	cin>>usn;
	cout<<"Enter the name:";
	cin>>name;
	for(int i=0;i<3;i++)
	{
		cout<<"Enter the marks of  subject "<<i+1<<":";
		cin>>marks[i];
	}
}

void student::display()
{
	cout<<"Name:"<<name<<endl<<"USN:"<<usn<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<"Marks of subject "<<i<<":"<<marks[i]<<endl;
	}
	cout<<"Avg of best of 2:"<<avg;
	cout<<endl<<endl<<"***********************"<<endl<<endl<<endl;
}
void student::calc()
{
	float sum=0,min=marks[0];
	for(int i=0;i<3;i++)
	{	
		sum+=marks[i];
		if(min>marks[i])
			min=marks[i];
	}
	avg=(sum-min)/2;
	
}

int main()
{
	int n,i,z;
	float topper,max=0;
	cout<<"Enter the number of students:";
	cin>>n;
	student ob[n];
	for(i=0;i<n;i++)
	{
		cout<<"Enter the details of student "<<i+1<<":"<<endl;
		ob[i].read();
		
		ob[i].calc();
		cout<<endl<<endl<<endl;
	}
	cout<<"***********************************************"<<endl;
	cout<<"                STUDENT DETAILS:               "<<endl;
	cout<<"***********************************************"<<endl;
	
	for(i=0;i<n;i++)
	{
	
		ob[i].display();
	}
	topper=ob[0].avg;
	for(i=0;i<n;i++)
	{
		if(topper<ob[i].avg)
			{topper=ob[i].avg;
			z=i;}
	}
	cout<<"***********************************************"<<endl;
	cout<<"                   TOPPER IS                   "<<endl;
	cout<<"***********************************************"<<endl;
	for(i=0;i<n;i++)
	{
		if(ob[i].avg==topper)
			ob[i].display();
	}
	return 0;
}
