#include <iostream>
using namespace std;

int main() {
	char s;
	cin>>s;
	if(s>='a' && s<='z'||s>='A' && s<='Z')
	{
		cout<<"Alphabet";
	}
	else
	{
		cout<<"Not an alphabet";
	}
	// your code goes here
	return 0;
}
