#include <stdio.h>
int Length(char *str) {
    int length = 0;
    while (*str) {       
        length++;
        str++;         
    }
    return length;
}

int main() {
    char input[100];

    
    printf("Enter a string:\n");
    gets(input);       
    
    printf("Length of the string: %d\n",Length(input));

    return 0;
}