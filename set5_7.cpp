#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int *a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<n;j++)
	{
		if(a[0]<a[j])
		{
			a[0]=a[j];
		}
	}
	cout<<"Highest number"<<" "<<a[0]<<endl;
	for(int m=0;m<n;m++)
	{
		if(a[0]>a[m])
		{
			a[0]=a[m];
		}
	}
	cout<<"Lowest number"<<" "<<a[0];
	
	return 0;
}
