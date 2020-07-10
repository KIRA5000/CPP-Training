#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v1{1,2,3,4,5};
	cout<<v1[2]<<endl;
	cout<<v1.at(2)<<endl;
	return 0;
}
