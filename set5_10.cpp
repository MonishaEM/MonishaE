 #include <iostream>
using namespace std;

int main() {
	int n,temp=0;
	cin>>n;
	while(n!=1)
	{
		if(n%2!=0)
		{
			temp=1;
		            break;
		}
		n=n/2;
	}
	if(temp==0)
	{
	cout<<"yes";
	}
	else
	{
	cout<<"no";
	}
	return 0;
}
