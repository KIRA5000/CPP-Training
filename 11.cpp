#include<iostream>
using namespace std;
int rev(int no)
{
	int r=0;
	while(no!=0)
	{
		r+=no%10;
		r*=10;
		no/=10;
	}
	r/=10;
	return r;
}
int main()
{
 	int no;
	cout<<"Enter a number\n";
	cin>>no;
	cout<<no<<":"<<rev(no)<<"\n";
        return 0;
}
