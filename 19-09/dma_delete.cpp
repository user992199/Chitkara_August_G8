#include<iostream>
using namespace std;
int main(){
	int * p = new int;
	*p = 17;
	cout<<p<<" -> "<<*p<<endl;
	// delete p;
	cout<<p<<" -> "<<*p<<endl;
	p = new int;
	*p = 13;
	cout<<p<<" -> "<<*p<<endl;
	// syntax
	// delete address;
	// cout<<*p<<endl;
	return 0;
}