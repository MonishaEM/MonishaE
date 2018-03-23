#include <iostream>
using namespace std;

int main() {
	int n,num,rem,result=0;
	cin>>n;
	num=n;
	while(n!=0)
	{
		rem=n%10;
		result=(result*10)+rem;
		n=n/10;
	}
	if(num==result)
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
