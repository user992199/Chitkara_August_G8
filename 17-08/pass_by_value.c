#include<stdio.h>
typedef struct student{
	int arr[5];
}stu;
void fun(stu s1){
	for(int i = 0; i < 5; i++){
		s1.arr[i] = 0;
	}
	for(int i = 0; i < 5; i++){
		printf("%d ", s1.arr[i]);
	}
	printf("\n");
}
int main(){
	stu s1;
	for(int i = 0; i < 5; i++){
		s1.arr[i] = i+1;
	}
	fun(s1);
	for(int i = 0; i < 5; i++){
		printf("%d ", s1.arr[i]);
	}
	printf("\n");
	return 0;
}