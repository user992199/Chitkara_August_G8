#include<iostream>
using namespace std;
void toh(int n, char s, char h, char t, int &step){
	// base case
	if(n == 0) return;
	// recursive case
	toh(n-1, s, t, h, step);
	cout<<++step<<": Disk "<<n<<" from "<<s<<" to "<<t<<endl;
	toh(n-1, h, s, t, step);
}
int main(){
	int n = 4, step = 0;
	toh(n, 'A', 'B', 'C', step);
	return 0;
}