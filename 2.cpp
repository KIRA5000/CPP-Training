#include<iostream>
using namespace std;
class Test
{
	public:
	mutable int a;
	mutable int b;
	Test(int c,int d)
	{
		a=c;
		b=d;
	}
};
int main()
{
	const Test t(10,20);
	cout<<t.a<<":"<<t.b<<endl;
	t.a=20;
	t.b=30;
	cout<<t.a<<":"<<t.b<<endl;
	return 0;
}
