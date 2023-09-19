#include<iostream>
using namespace std;
int main(){
	int * p = new int;
	*p = 17;
	cout<<p<<" -> "<<*p<<endl;
	cout<<p<<" -> "<<*p<<endl;
	p = new int;
	*p = 13;
	cout<<p<<" -> "<<*p<<endl;
	return 0;
}