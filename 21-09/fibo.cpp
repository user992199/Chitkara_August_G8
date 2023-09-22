#include<iostream>
using namespace std;
int fibo(int n){
	// base case
	if(n == 1 or n == 2) return n-1;
	// recursive case
	int sp1 = fibo(n-1);
	int sp2 = fibo(n-2);
	// final soln
	int ans = sp1 + sp2;
	return ans;
}
int main(){
	for(int i = 1; i <= 10; i++)
		cout<<fibo(i)<<" ";
	cout<<endl;
	return 0;
}