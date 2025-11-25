/* Q121:Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
#include <stdio.h>
int main() {
    char name[50];
    int age;
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%d", &age);
    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fp, "Name: %s Age: %d", name, age);
    fclose(fp);
    printf("File created successfully! Data written to info.txt");
    return 0;
}
