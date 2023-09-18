#include<iostream>
using namespace std;
void print_ans(int ans){
	cout<<ans<<endl;
}
int print_ans(int ans, int n){
	cout<<ans + n<<endl;
	return ans + n;
}
void print_ans(float ans){
	cout<<"Float: "<<ans<<endl;
}
int main(){
	print_ans(10);
	print_ans(10, 5);
	// print_ans((float)3.14);
	float f = 3.14;
	print_ans(f);
	return 0;
}