#include<iostream>
using namespace std;
int check(int no)
{
	int no1=0;
	int temp=no;
	while(no!=0)
	{
		no1+=no%10;
		no/=10;
		no1*=10;
	}
	no1/=10;
	if(temp==no1)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int no;
	cout<<"Enter a number\n";
	cin>>no;
	if(check(no)==1)
	{
		cout<<"It is a palindrome\n";
	}
	else
	{
		cout<<"Number is not a palindrome\n";
	}
	return 0;
}
