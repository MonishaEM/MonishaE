#include <iostream>
using namespace std;

int main() {
	int n1,n2,temp;
	cin>>n1;
	cin>>n2;
	cout<<"Before swap"<<endl;
	cout<<n1<<" "<<n2<<endl;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"After swap"<<endl;
	cout<<n1<<" "<<n2;
	
	
	return 0;
}
