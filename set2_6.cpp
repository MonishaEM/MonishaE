#include <iostream>
using namespace std;

int main() {
	int n1,n2;
	cin>>n1;
	cin>>n2;
	while(n1<n2)
	{
	int count=0;
	
	for(int i=2;i<=n1/2;++i)
	{
		if(n1 % i==0)
		{
			count=1;
			break;
		}
	}
	if(count==0)
	cout<<n1<<" ";
	
	++n1;
	
	}
	
	// your code goes here
	return 0;
}
