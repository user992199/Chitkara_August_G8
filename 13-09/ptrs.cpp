#include<iostream>
using namespace std;
int main(){
	int i = 10;
	int * p;
	p = &i;
	cout<<*p<<endl;
	*p = 13;
	cout<<i<<endl;
	int * p2 = &i;
	cout<<p2<<endl;
	cout<<*p2<<endl;
	return 0;
}