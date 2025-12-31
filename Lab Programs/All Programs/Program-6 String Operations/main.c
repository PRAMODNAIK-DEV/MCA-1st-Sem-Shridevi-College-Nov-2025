#include <stdio.h>
#include <string.h> // This header file contains string functions

int main() {
    char str1[50], str2[50], str3[50]; 
    int length;

    // Taking input from user
    printf("Enter first string: ");
    scanf("%s", &str1);      // OR Use gets(str1);

    printf("Enter second string: ");
    scanf("%s", &str2);

    // Concatenate two strings
    strcpy(str3, str1);  // Copy str1 to str3 first
    strcat(str3, str2);  // Then join (append) str2 to str3
    printf("\nAfter concatenation: %s\n", str3);

    // Finding length of first string
    length = strlen(str1);
    printf("Length of first string: %d\n", length);

    // Copy second string to first string
    strcpy(str1, str2);
    printf("After copying second string to first: %s\n", str1);

    return 0;
}