#include <iostream>
using namespace std;

int main() {
	int num1,num2,temp,sum,rem;
	cin>>num1>>num2;
	while(num1<num2)
	{
	temp=num1;
	sum=0;
	while(temp!=0)
	{
		rem=temp%10;
		sum+=rem*rem*rem;
		temp=temp/10;
	}
	if(num1==sum)
	{	cout<<num1;
	}

	num1++;
	}
	return 0;
}
