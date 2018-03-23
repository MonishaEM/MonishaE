#include <iostream>
using namespace std;

int main() {
	int n,count=0;
	cin>>n;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
			break;
		}
	}
	if(count==0)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	// your code goes here
	return 0;
}
