// Matthew Phillips
// Pointer Demo

#include <stdio.h>
#include <stdlib.h>

void double1(int* a, int b);
void double2(int* a, int b);
void double3(int* a, int b);

int main() {
	
	// Uncomment a concept to test it!
	
	/*
	// Substring
	printf("Taking a substring out of a string:\n");
	
	char a[] = "Hello World";
	char* b = a;
	a[5] = '\0';
	printf("%s\n", b + 2);
	// llo
	
	// Size of a Pointer
	printf("Tricky - size of a pointer:\n");
	
	char a[10];
	char *b = malloc(10);
	b = realloc(b, 5);
	printf("%d %d\n", sizeof(a), sizeof(b));
	// 10 8
	
	// Cursor and Files
	printf("Tracking File Cursor:\n");

	int buffer[512];
	memset(buffer, 0, sizeof(buffer));
	FILE *fp = fopen("test.txt", "w");
	int retvalue = fwrite(buffer, 256, 1, fp);
	printf("%d %d\n", retvalue, ftell(fp));
	// 1 256
	
	// Dynamic Buffer
	printf("Dynamic Buffer:\n");

	char line[];
	char* buffer = malloc(2);
	int buffer_size = 2;
	while(buffer_size < strlen(line)) {
		buffer = realloc(buffer, buffer_size * 2);
		buffer_size *= 2;
	}
	strcpy(buffer, line);
	printf("%d %d\n", buffer_size, strlen(buffer));
	// 32 21
	
	// Pass-by-value / Pass-by-reference
	printf("Function Passing:\n");
	
	int d = 2;
	int e = 2;
	int f = 2;
	double1(&d, d);
	double2(&e, e);
	double3(&f, f);
	printf("%d %d %d\n", d, e, f);
	// 2 4 2
	* */
	
	return 0;
}

// Pass-by-value / Pass-by-reference
void double1(int* a, int b) {
	b *= 2;
}
void double2(int* a, int b) {
	*a *= 2;
}
void double3(int* a, int b) {
	int* c = &b;
	*c *= 2;
}
