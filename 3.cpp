// 123.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Employe
{
public:
  Employe ():name("0"), next_name("0"),  c(0), courseName("0")
	{
		setCourseName(name);
	}
	void setCourseName(string asd)
	{

	}
	int get()
	{
		return c*0.1+c*12;
	}
	void set(string myname, string mynext_name, int myc)
	{
		name=myname;
		next_name=mynext_name;
		c=myc;
		if (c<=0)
		{
			cout<<"0";
		}
		else 
		{
			int r=c*12;
			cout<<r<<endl;
		}
	/*	{
			int
		}*/
	}
	void display()
	{
		cout<<get()<<endl;
	}
private:
	string name;
	string next_name;
	int c;
	string courseName;


};
int _tmain(int argc, _TCHAR* argv[])
{
	string name;
	string next_name;
	int c;
	cout<<"vvedite imya ";
	cin>>name;
	cout<<"\nvvedite famili ";
	cin>>next_name;
	cout<<"\nvvedite zarplat ";
	cin>>c;

	Employe my_name;
	my_name.set(name,next_name,c);
	my_name.display();
	getch();
	return 0;
}

