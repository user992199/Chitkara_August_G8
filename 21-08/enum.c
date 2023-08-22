#include<stdio.h>
enum list{OOPs, Java = 10, C = 2, Python, recursion, greedy};
int main(){
	enum list l1 = Python;
	printf("%d\n", l1);
	printf("%d\n", sizeof(l1));
	printf("%d\n", OOPs);
	return 0;
}