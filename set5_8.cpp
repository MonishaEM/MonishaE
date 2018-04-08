#include <iostream>
using namespace std;

int main() {
	int n,sum=0;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	int avg=sum/n;
	cout<<"Average"<<" "<<avg;
	
	return 0;
}
