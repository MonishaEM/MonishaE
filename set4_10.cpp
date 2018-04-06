#include <iostream>
using namespace std;

int main() {
	int n,f1=1,f2=1,f3;
	cin>>n;
	cout<<"Fibonacci series"<<endl;
	cout<<f1<<" "<<f2<<" ";
	f3=f1+f2;
	while(f3<=n)
	{
		cout<<f3<<" ";
	    f1=f2;
	    f2=f3;
	    f3=f1+f2;
	}
	return 0;
}
