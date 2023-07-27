#include<iostream.h>
struct date
{
int d;
int m;
int y;
};
class hospital
{
char name[100];
struct date d_adm;
struct date d_dis;
public:
void getdata()
{
cout<<"Enter name of the patient: ";
cin>>name;
cout<<"Enter date of admission: ";
cin>>d_adm.d>>d_adm.m>>d_adm.y;
cout<<"Enter date of discharge: ";
cin>>d_dis.d>>d_dis.m>>d_dis.y;
}
void display()
{
cout<<"Patient name: "<<name;
cout<<"Date of admission: "<<d_adm.d<<d_adm.m<<d_adm.y;
cout<<"Date of discharge: "<<d_dis.d<<d_dis.m<<d_dis.y;
}};
class age:public hospital
{
int a;
public:
void get()
{
cout<<"Enter age: ";
cin>>a;
}
void put()
{
if(a<12)
{
display();
cout<<"age: "<<a;
}
else
cout<<"age greater than 12";
}};
int main()
{
age a1;
a1.getdata();
a1.get();
a1.put();
return 0;
}
