#include<iostream>
#include<algorithm>
using namespace std;
void pa(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
int main(){
	int arr[] = {10, 9, 8, -19, 7, 2, 3, -3, 14, 65, 53, -13, 4};
	int n  = sizeof(arr)/sizeof(arr[0]);
	pa(arr, n);
	sort(arr, arr+n);
	pa(arr, n);
	return 0;
}