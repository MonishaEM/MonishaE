#include <iostream>
using namespace std;

int main() {
	int n,k,sum=0;
	cin>>n;
	cin>>k;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<k;j++)
	{
		sum+=arr[j];
	}
	cout<<sum;
	
	
	
	// your code goes here
	return 0;
}
