#include<iostream>
using namespace std;
void pa(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
void bs(int arr[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n- i - 1; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}
	}
}
void bs_part(int arr[], int n, int i = 0){
	// base case
	if(i == n-1) return;
	// recursive case
	for(int j = 0; j < n- i - 1; j++){
		if(arr[j] > arr[j+1]){
			swap(arr[j], arr[j+1]);
		}
	}
	bs_part(arr, n, i+1);
}
int main(){
	int arr[] = {6, 5, 4, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	bs_part(arr, n);
	pa(arr, n);
	return 0;
}