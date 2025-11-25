/* Q134:Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
#include <string.h>
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};
int main() {
    char input[20];
    scanf("%s", input);

    enum Status state;
    if (strcmp(input, "SUCCESS") == 0)
        state = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        state = FAILURE;
    else
        state = TIMEOUT;
    switch (state) {
        case SUCCESS:
            printf("Operation successful");
            break;
        case FAILURE:
            printf("Operation failed");
            break;
        case TIMEOUT:
            printf("Operation timed out");
            break;
    }
    return 0;
}
