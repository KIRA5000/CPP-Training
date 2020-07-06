#include<iostream>
using namespace std;
class Test
{
	int a;
	int b;
	public:
	Test():a(0),b(0){}
	friend int allow(Test);
};
int allow(Test t)
{
        t.b+=10;
        return t.b;
}
int main()
{
	Test t;
	cout<<"b:"<<allow(t)<<endl;
	return 0;
}
