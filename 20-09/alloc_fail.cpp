#include<iostream>
using namespace std;
int main(){
	// int *p = new int[1000000000];
	int *p = new int[100000000];
	for(int i = 0; i < 100; i++){
		delete []p;
		p = new int[100000000];
	}
	cout<<p[0]<<endl;
	cout<<p[9999999]<<endl;
	return 0;
}