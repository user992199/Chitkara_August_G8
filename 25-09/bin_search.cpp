#include<iostream>
using namespace std;
int bs(int arr[], int n, int key){
	int s = 0, e = n-1;
	while(s <= e){
		int m = s + (e-s)/2;
		if(arr[m] == key) return m;
		if(arr[m] > key) e = m-1;
		else s = m+1;
	}
	return -1;
}
int bs_rec(int arr[], int key, int s, int e){
	// base case
	if(s > e) return -1;
	// recursive case
	int m = s + (e-s)/2;
	if(arr[m] == key) return m;
	if(arr[m] > key) return bs_rec(arr, key, s, m-1);
	else return bs_rec(arr, key, m+1, e);
}
int main(){
	int arr[] = {1, 3, 4, 6, 7, 9, 10, 14, 18};
	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 19;
	cout<<bs(arr, n, key)<<endl;
	cout<<bs_rec(arr, key, 0, n-1)<<endl;
	return 0;
}