#include <stdio.h>
#include <string.h>
 
int main( void ) {
 
    char text[10];
 
    strcpy(text, "The Text is too long for text."); // too long
    printf("strlen(text): %u\n", strlen(text));     // missing '\0'
    printf("%s\n", text);
 
    text[sizeof(text)-1] = '\0';
    printf("strlen(text): %u\n", strlen(text));
 
    return 0;

}
