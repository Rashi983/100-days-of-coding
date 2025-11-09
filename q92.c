/* Q92:Find the first repeating lowercase alphabet in a string:
#include <stdio.h>
int main() {
    char str[100];
    int freq[26] = {0};  
    int i = 0, found = 0;
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) {
                printf("%c", ch);
                found = 1;
                break;
}
        }
        i++;
    }
    if (!found)
        printf("No repeating character");
    return 0;
}