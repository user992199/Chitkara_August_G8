#include<stdio.h>
#pragma pack(1)
struct st{
	char ch;
	double d;
};
// }__attribute__((packed));
int main(){
	struct st s1;
	printf("%d\n", sizeof(s1));
	return 0;
}