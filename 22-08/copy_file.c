#include<stdio.h>
int main(){
	FILE * og = fopen("file.txt", "r");
	FILE * cpy = fopen("copy_of_file.txt", "w");
	char ch;
	while((ch = fgetc(og)) != EOF){  
		fputc(ch, cpy);
	}
	fclose(og); fclose(cpy);
	return 0;
}