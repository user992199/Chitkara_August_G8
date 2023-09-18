#include<iostream>
using namespace std;
int main(){
	int *p;
	{
		p = new int;
	}
	*p = 13;
	cout<<*p<<endl;
	return 0;
}