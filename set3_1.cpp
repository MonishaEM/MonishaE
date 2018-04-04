#include <iostream>
using namespace std;

int main() {
	int n,a,d,sum=0;
	cin>>n;
	cin>>a;
	cin>>d;
	for(int i=1;i<=n;i++)
	{
		sum=sum+a;
		a=a+d;
		
	}
	cout<<sum;
	return 0;
}
