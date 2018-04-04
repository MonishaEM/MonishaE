#include <iostream>
using namespace std;

int main() {
	int i,j,n;
	cin>>n;
	int *a=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nData before sorting: ";
	for(j=0;j<10;j++)
	{
	cout<<a[j];
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
		if(a[j]>a[j+1])
	{
		int temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	}
	}
	cout<<"\nData after sorting: ";
	for(j=0;j<10;j++)
	{
	cout<<a[j];
	}
	return 0;
}
