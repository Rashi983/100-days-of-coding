/* Q86:Check if a string is a palindrome:
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, length = 0, isPalindrome = 1;
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; 
            break;
        }
    }
    if (isPalindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}
