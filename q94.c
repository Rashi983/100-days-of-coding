/* Q94:Find the longest word in a sentence:
#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    char longest[50] = "";
    char temp[50];
    int i = 0, j = 0;
    fgets(str, sizeof(str), stdin);
    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            temp[j++] = str[i];
        } else {
            temp[j] = '\0';   
            if (strlen(temp) > strlen(longest)) {
                strcpy(longest, temp);
            }
            j = 0;  
            if (str[i] == '\0')
                break;
        }
        i++;
    }
    printf("%s", longest);
    return 0;
}
