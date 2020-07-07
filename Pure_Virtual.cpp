#include<iostream>
using namespace std;
class shape
{
	public:
		virtual void name()=0;
};
class circle : public shape
{
	public:
		void name()
		{
			cout<<"Circle\n";
		}
};
int main()
{
	shape *s=new circle();
	s->name();
	return 0;
}
