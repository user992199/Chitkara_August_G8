#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n = 50;
	int * arr = new int[n];
	// syntax
	// delete []address;
	delete []arr;
	n *= 2;
	arr = new int[n];
	memset(arr, -1, sizeof(arr[0]) * n);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}