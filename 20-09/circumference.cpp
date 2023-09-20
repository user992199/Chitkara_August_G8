#include<iostream>
using namespace std;
int main(){
	int * rptr = 0;
	// code
	int r = 7;
	rptr = &r;
	// code
	cout<<2 * 22 * (*rptr) / 7<<endl;
	return 0;
}