#include<stdio.h>
#include<string.h>
void main() {
	char str[] = "Hello World";
	int length, i;
	char ch;
	length = strlen(str);
	printf("Original String is: %s\n\n", str);
	printf("Encrypted String with AND:\n");
	for(i = 0; i < length; i++) {
		ch = str[i] & 127;
		printf("%c", ch);
	}
	printf("\nEncrypted String with XOR:\n");
	for(i = 0; i < length; i++) {
		ch = str[i] ^ 127;
		printf("%c", ch);
	}
}

char *str="Hello world";
int length,i;
char result;
clrscr();
length = strlen(str);
for(i=0;i<length;i++) {
result = str[i]^127;
printf("%c",result); }
for(i=0;i<length;i++) {
result = str[i]&127;
printf("%c",result); }
getch();
return 0; 
