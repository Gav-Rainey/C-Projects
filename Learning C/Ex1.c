#include <stdio.h>
#include <string.h>

int main() {

	char[] name;

	printf("What is your name?");

	fgets(name, 20, stdin);

	name[strlen(name) - 1] = '\0';

	printf("Your name is %s", name);

	return 0;
}