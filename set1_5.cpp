#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cin>>a;
	cin>>b;
	cin>>c;
	if(a>b && a>c)
	{
		cout<<"A is larger";
	}
	else if(b>c)
	{
		cout<<"B is larger";
	}
	else
	{
		cout<<"C is larger";
	}
	// your code goes here
	return 0;
}
