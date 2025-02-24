#include <stdio.h>

int main() {
    char word[100]; // Assuming max length of the word is 99 characters + null terminator
    scanf("%s" word);// Read a single word
    printf("You entered: %s\n", word); // Print the entered word
    return 0;
}
