#include<iostream>
using namespace std;

class Test
{
	private:
	   int x, y, z;
	public:

	   void input()
	   {
	       cout<<"Enter three numbers:\n";
	       cin>>x>>y>>z;
	   }
	   friend void find(Test t);
};

void find(Test t)
{
	if (t.x > t.y && t.x > t.z)
	{
		cout<<"Largest is:\n"<<t.x;
	}
	else if (t.y > t.z)
	{
     	cout << "Largest is:\n" << t.y;
	}
	else
	{
     	cout << "Largest is:\n" << t.z;
   	}
}

int main()
{
	Test t;
   	t.input();
	find(t);
   	return 0;
}
