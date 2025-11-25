/* Q124:Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
int main() {
    char srcFile[50], destFile[50];
    char ch;
    printf("Enter source filename: ");
    scanf("%s", srcFile);

    printf("Enter destination filename: ");
    scanf("%s", destFile);
    FILE *src = fopen(srcFile, "r");
    FILE *dest = fopen(destFile, "w");
    if (src == NULL) {
        printf("Error! Source file not found.\n");
        return 1;
    }
    if (dest == NULL) {
        printf("Error! Could not open destination file.\n");
        fclose(src);
        return 1;
    }
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }
    fclose(src);
    fclose(dest);
    printf("File copied successfully to %s", destFile);
    return 0;
}
