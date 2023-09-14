#include<iostream>
using namespace std;
// int add(int , int , int , int);
int add(int a, int b, int c = 0, int d = 0);
int main(){
	cout<<add(1, 2)<<endl;
	return 0;
}
int add(int a, int b, int c, int d){
	return a + b + c + d;
}