#include<stdio.h>
int main(){
	FILE * ptr = fopen("file.txt", "r");
	if(ptr == 0) return 0;
	char ch;
	int count = 0;
	while(!feof(ptr)){
		ch = fgetc(ptr);
		if(ch == '\n') count++;
	}
	printf("%d\n", count+1);
	fclose(ptr);	
	return 0;
}