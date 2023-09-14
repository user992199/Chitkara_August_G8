#include<iostream>
using namespace std;
// int add(int arr[]){
// int add(int arr[6]){
// int add(int arr[5]){
int add(int *arr, int n){
	int ans = 0;
	for(int i = 0; i < n; i++){
		ans += arr[i];
	}
	return ans;
}
int main(){
	int arr[] = {1, 2, 3, -4, 5, 6};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<add(arr, n)<<endl;
	return 0;
}