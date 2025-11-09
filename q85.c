/* Q85:Reverse a string:
#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0;
    char temp;
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }
    for (i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    for (i = 0; i < length; i++) {
        printf("%c", str[i]);
    }
    return 0;
}
