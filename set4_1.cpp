#include <iostream>
#include <string>
using namespace std;

int main() {
	string str; int count=0;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
	if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            {
            count++;
            }
	}
	cout<<"No of characters in a given string"<<" "<<count;
	return 0;
}
