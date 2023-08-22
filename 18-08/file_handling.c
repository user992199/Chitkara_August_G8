#include<stdio.h>
int main(){
	FILE * ptr = fopen("file.txt", "a");
	if(ptr == 0){
		printf("File not opened\n");
	}else{
		printf("File opened\n");
	}
	fputs("\nClub", ptr);
	fseek(ptr, 10, SEEK_SET); // SEEK_END // SEEK_CUR
	fputs("\nHello", ptr);
	fclose(ptr);
	return 0;
}