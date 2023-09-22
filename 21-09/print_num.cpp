#include<iostream>
using namespace std;
void f(int n){
	if (n == 0) return;
	cout<<n<<" ";
	f(n-1);
}
void f2(int n){
	if (n == 0) return;
	cout<<n<<" ";
	f(n-1);
}
int main(){
	int n = 10;
	f(n);
	cout<<endl;
	return 0;
}