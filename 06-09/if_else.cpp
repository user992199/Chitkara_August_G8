#include<iostream>
using namespace std;
int main(){
	if(not(10 > 0 or 5 > 0)){
		cout<<10<<endl;
	}else{
		cout<<0<<endl;
	}
	return 0;
}