/*WAP to read the data of n employees and compute net salary of each using pointer*/
#include<iostream>
using namespace std;
class employee
{
	int ID,basic;
	long da,it,netsal,gsal;
	char name[50];

	public:

	void read();
	void calc();
	void display();
};

void employee::read()
{
	cout<<"Enter employee ID, employee name and basic salary\n";
	cin>>ID>>name>>basic;
}

void employee::calc()
{
	da=(0.52)*basic;
	gsal=da+basic;
	it=(0.30)*gsal;
	netsal=da+basic-it;
}

void employee::display()
{
	cout<<"EMPLOYEE ID\t"<<ID<<"\n"<<"EMPLOYEE NAME\t"<<name<<"\n"<<"BASIC SALARY\t"<<basic<<"\n"<<"DA\t\t"<<da<<"\n"<<"GROSS SALARY\t"<<gsal<<"\n"<<"INCOME TAX\t"<<it<<"\n"<<"NET SALARY\t"<<netsal<<"\n";
}

int main()
{
	int n,i;
	cout<<"Enter number of employee's"<<"\n";
	cin>>n;
	employee e[n], *p;
	for(i=0;i<n;i++)
	{
		p=&e[i];
		p->read();
		p->calc();
	}
	for(i=0;i<n;i++)
	{
		p=&e[i];
		p->display();
	}
	return 0;
}
