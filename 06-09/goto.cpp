#include<iostream>
using namespace std;
int main(){
	cout<<"Before Label\n";
	label:
	cout<<"After Label\n";
	goto label;
	return 0;
}