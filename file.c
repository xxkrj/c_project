#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void file() {
	FILE* fp = fopen("test.txt", "w");
	int a = 1, b = 2, c = 3;
	fprintf(fp, "%d %d %d", a, b, c);
	fclose(fp);
}
void readf() {
	FILE* fp = fopen("test.txt", "r");
	int a, b, c;
	fscanf(fp, "%d %d %d", &a, &b, &c);
	printf("%d %d %d", a, b, c);
	fclose(fp);
}
void app() {
	int a = 4, b = 5, c = 6;
	FILE* fp = fopen("test.txt", "a");
	fprintf(fp, "%d %d %d", a, b, c);
	fclose(fp);
}
int main() {
	file();
	readf();
	app();
}
