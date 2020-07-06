#include<iostream>
#include<limits.h>
using namespace std;
int MIN(int *a,int size)
{
	cout<<sizeof(a)<<"\n";
	int min=INT_MAX;
	for(int i=0;i<size;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	return min;
}
int main()
{
	int a[5]={1,2,3,4,5};
	int mi=MIN(a,5);
	cout<<"Min value in array:"<<mi<<"\n";
}
