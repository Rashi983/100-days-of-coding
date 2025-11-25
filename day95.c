/* Q145:Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    float marks;
};
struct Student getTopStudent(struct Student s[], int n) {
    int i, topIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks) {
            topIndex = i;
        }
    }
    return s[topIndex];   
}
int main() {
    int n = 3;
    struct Student s[3] = {
        {"Riya", 101, 89},
        {"Karan", 102, 96},
        {"Meena", 103, 92}
    };
    struct Student top = getTopStudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %.0f\n",
           top.name, top.roll_no, top.marks);
    return 0;
}

