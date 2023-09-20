#include<iostream>
using namespace std;
int main(){
	int * p; // wild pointer
	p = 0; // null pointer
	p = new int; // pointer
	*p = 10;
	delete p; // dangling pointer
	// p = 0;
	int i = 13;
	p = &i;
	cout<<*p<<endl; // pointer
	return 0;
}