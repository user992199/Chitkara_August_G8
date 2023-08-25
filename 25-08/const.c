#include<stdio.h>
int main(){
	int b = 5;

	// case 1
	// int a = 10;
	// int* p = &a;

	// case 2
	// const int a = 10;
	// int* p = &a;

	// case 3 : pointer to constant integer
	// int a = 10;
	// const int * p = &a;

	// case 4 : constant pointer to integer
	// int a = 10;
	// int* const p = &a;

	// case 5
	// const int a = 10;
	// const int* p = &a;

	// case 6
	// const int a = 10;
	// int* const p = &a;

	// case 7 : constant pointer to constant integer
	// int a = 10;
	// const int* const p = &a;

	// case 8
	const int a = 10;
	const int* const p = &a;

	// a = b;
	// p = &b;
	// *p = b;

	printf("a = %d\n", a);
	printf("*p = %d\n", *p);
	return 0;
}