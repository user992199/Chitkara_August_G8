#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int n = 50;
	// int arr[n];
	// syntax
	// datatype * ptr = new datatype[number of variable];
	int * arr = new int[n];
	// n = sizeof(arr)/sizeof(arr[0]);
	// cout<<sizeof(arr)<<endl;
	// cout<<n<<endl;
	memset(arr, -1, sizeof(arr[0]) * n);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	return 0;
}