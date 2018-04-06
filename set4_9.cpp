#include <iostream>
using namespace std;

int main() {
	int n=10,max;
	int *a=new int[n];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(int j=0;j<10;j++)
	{
		if(a[j]>max)
		{
			max=a[j];
		}
		
	}
	cout<<max;
	
	
	return 0;
}
