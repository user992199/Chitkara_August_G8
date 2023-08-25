#include<stdio.h>
int add(int a, int b){
	return a + b;
}
int main(){
	// return_type (*ptr_name) (parameter);
	int (*ptr) (int, int) = &add;
	ptr = &add;
	printf("%d\n", ptr(1, 2));
	return 0;
}