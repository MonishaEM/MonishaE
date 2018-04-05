#include <iostream>
using namespace std;

int main() {
	int n,i;
	cin>>n;
	int *arr=new int[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
	cout<<arr[i]<<" "<<i<<endl;
		
	}
	
	return 0;
}
