#include<iostream>
using namespace std;
void for_loop(int n){
	for(int i = 1; i <= n; i++){
		cout<<i<<" ";
	}cout<<endl;
}
void rec(int n, int i = 1){
	// base case
	if(i > n){
		cout<<endl;
		return;
	}
	// recursive case
	cout<<i<<" ";
	rec(n, i+1);
}
int main(){
	for_loop(10);
	rec(10);
	return 0;
}