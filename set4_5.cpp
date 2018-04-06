#include <iostream>
#include <string>
using namespace std;

int main() {
	string c; int count=0;
	cin>>c;
	for(int i=0;i<c.length();i++)
	{
	if(c[i]>='0' && c[i]<='9')
	{
		count++;
	}
	}
	cout<<"No of numeric characters in a given string"<<" "<<count;
	return 0;
}
