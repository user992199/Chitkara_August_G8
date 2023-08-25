#include<stdio.h>
#include<stdarg.h>
int add(int n, ...){
	int ans = 0;
	va_list ptr;
	va_start(ptr, n);
	for(int i = 0; i < n; i++){
		ans += va_arg(ptr, int);
	}
	va_end(ptr);
	return ans;
}
int main(){
	printf("%d\n", add(5, 5, 4, 3, 2, 1));
	return 0;
}