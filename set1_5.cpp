#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a>b && a>c)
	{
		cout<<a;
	}
	else if(b>c)
	{
		cout<<b;
	}
	else
	{
		cout<<c;
	}
	// your code goes here
	return 0;
}
