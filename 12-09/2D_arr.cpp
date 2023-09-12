#include<iostream>
using namespace std;
int main(){
	// syntax
	// datatype identifier[num of rows][num of cols];
	int arr[7][4];
	cout<<sizeof(arr)<<endl;
	int row = sizeof(arr)/sizeof(arr[0]);
	int col = sizeof(arr[0])/sizeof(arr[0][0]);
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	return 0;
}