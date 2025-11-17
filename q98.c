/* Q98:Print initials of a name with the surname displayed in full:
#include <stdio.h>
#include <string.h>
int main() {
    char name[200];
    char words[20][50];
    int i = 0, j = 0, k = 0;
    fgets(name, sizeof(name), stdin);
    while (name[i] != '\0') {
        if (name[i] == ' ' || name[i] == '\n') {
            if (j > 0) {
                words[k][j] = '\0';
                k++;
                j = 0;
            }
        } else {
            words[k][j++] = name[i];
        }
        i++;
    }
    words[k][j] = '\0'; 
    int total = k;       
    for (i = 0; i < total; i++) {
        printf("%c.", words[i][0]);
    }
    printf(" %s", words[total]);
    return 0;
}
