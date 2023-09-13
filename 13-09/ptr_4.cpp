#include<iostream>
using namespace std;
int main(){
	int arr[] = {34, 1, 5, 6, 3,2 ,6 ,8 ,4 ,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
	for(int i = 0; i < n; i++){
		cout<<arr+i<<" ";
	}cout<<endl;
	for(int i = 0; i < n; i++){
		cout<<*(arr+i)<<" ";
	}cout<<endl;
	int * p = arr;
	for(int i = 0; i < n; i++){
		cout<<*(p+i)<<" ";
	}cout<<endl;
	for(int i = 0; i < n; i++){
		cout<<p[i]<<" ";
	}cout<<endl;
	return 0;
}