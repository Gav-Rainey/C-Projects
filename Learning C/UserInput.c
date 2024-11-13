#include <stdio.h>
#include <string.h>

int main(){

    char name[] = "";

    printf("What is your name?");
    //scanf("%s", &name); // Stops at whitespace
    fgets(name,20,stdin); // Allows whitespace
    
    name[strlen(name)-1] = '\0'; // Removes new line characted from fgets function

    printf("Your name is %s",name);

    return 0;
}