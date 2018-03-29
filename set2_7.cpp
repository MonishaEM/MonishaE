#include <iostream>
using namespace std;

int main() {
	int n,sum=0,rem,temp;
	cin>>n;
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(temp==sum)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
