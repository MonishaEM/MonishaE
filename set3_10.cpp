#include <iostream>
using namespace std;

int main() {
	int hrs2,min2,hrs1,min1,temp1,temp2,sub=0;
	cin>>hrs1>>min1;
	cin>>hrs2>>min2;
	temp1=hrs1*60;
	temp2=hrs2*60;
	temp1=temp1+min1;
	temp2=temp2+min2;
	sub=abs(temp1-temp2);
	hrs1=sub/60;
	sub=sub%60;
	cout<<hrs1<<" "<<sub;
	
	return 0;
}
