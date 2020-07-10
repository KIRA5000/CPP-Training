#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int> d1;
	d1.push_back(1);
	d1.push_back(2);
	d1.push_back(3);
	for(int i=0;i<d1.size();i++)
	{
		cout<<d1[i]<<" ";
	}
	d1.pop_back();
	cout<<endl;
	for(int i=0;i<d1.size();i++)
        {
                cout<<d1[i]<<" ";
        }
	cout<<endl;
	deque<string> str={"Hello world,How are you?"};
	cout<<str.size()<<endl;
	return 0;
}
