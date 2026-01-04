// Program 97 :Write a program to find the student with highest marks using an array of structures.

#include <stdio.h>

struct student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct student s[n];
    int maxIndex = 0;

    for(int i = 0; i < n; i++) {
        printf("\nEnter roll, name and marks: ");
        scanf("%d %s %f",
              &s[i].roll, s[i].name, &s[i].marks);

        if(s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }

    printf("\nTop Scorer Details\n");
    printf("Roll: %d\nName: %s\nMarks: %.2f",
           s[maxIndex].roll, s[maxIndex].name, s[maxIndex].marks);

    return 0;
}
