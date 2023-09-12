#include<iostream>
using namespace std;
int main(){
	int arr[10];
	// int arr[100000000];
	cout<<sizeof(arr)<<endl;
	int n = sizeof(arr)/sizeof(arr[0]);
	arr[0] = 1234;
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}