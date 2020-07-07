#include<iostream>
using namespace std;
int fact(int no)
{
	int tot=1;
	while(no>0)
	{
		tot*=no--;
	}
	return tot;
}
int main()
{
	int no;
	cout<<"Enter a number\n";
	cin>>no;
	cout<<no<<":"<<fact(no)<<"\n";
}
