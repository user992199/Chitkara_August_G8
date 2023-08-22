#include<stdio.h>
union password{
	int i;
	float f;
	char ch;
};
void print_union(union password p){
	printf("%d\t%f\t%c\n", p.i, p.f, p.ch);
}
int main(){
	union password p;
	p.i = 122;
	print_union(p);
	p.f = 3.14;
	print_union(p);
	p.ch = 'a';
	print_union(p);
	return 0;
}