#include<stdio.h>
#pragma pack(1)
struct st{
	int k: 10;
	int : 0;
	int i: 10;
	// double d : 14;
};
// }__attribute__((packed));
int main(){
	struct st s1;
	s1.i = 1024;
	printf("%d\n", s1.i);
	printf("%d\n", sizeof(s1));
	return 0;
}