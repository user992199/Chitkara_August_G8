#include<iostream>
using namespace std;
int main(){
	int i = 10, j = 13;
	int arr[3];
	int *p1 = &arr[0], *p2 = &arr[2];
	// cout<<p1 + p2<<endl;
	cout<<p1<<endl;
	cout<<p2<<endl;
	cout<<p1 - p2<<endl;
	cout<<p1 + 1<<endl;
	cout<<p1 - 1<<endl;
	return 0;
}