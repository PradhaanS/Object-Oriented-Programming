/*WAP tot find the largest of 3 numbers using inline function and default argument concept*/
#include<iostream>
using namespace std;
inline int cmp(int x,int y,int z)
{
	if(x>y&&x>z)
	return(x);
	else if(y>z)
	return(y);
	else
	return(z);
}

int main()
{
	int a,b,c;
	cout<<"enter 3 numbers\n";
	cin>>a>>b>>c;
	cout<<cmp(a,b,c)<<" is larger "<<endl;
	return 0;
}
