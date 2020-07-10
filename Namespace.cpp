#include<iostream>
using namespace std;
namespace A
{
	int x=10;
	void display()
	{
		cout<<x<<endl;
	}
}
namespace B
{
	int x=5;
	void display()
	{
		cout<<x<<endl;
	}
}
int main()
{
	A::display();
	B::display();
	return 0;
}
