#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(2);
	for(vector<int>::iterator itr=v1.begin();itr!=v1.end();itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	return 0;
}
