#include <iostream>
using namespace std;

int main() {
	int min,hrs;
	cin>>min;
	hrs=min/60;
	min=min%60;
	cout<<hrs<<" "<<min;
	return 0;
}
