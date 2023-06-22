#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void Parse_String(const char* input, struct Student* students, int numStudents) {
    int i = 0;
    char temp[20];
    sscanf(input, "%d %s %f", &(students[i].rollno), temp, &(students[i].marks));
    strncpy(students[i].name, temp, sizeof(students[i].name) - 1);
}

void Display_Students(const struct Student* students, int numStudents) {
    printf("Students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }
}

int Comparing_Students(const void* a, const void* b) {
    const struct Student* studentA = (const struct Student*)a;
    const struct Student* studentB = (const struct Student*)b;
    if (studentA->marks < studentB->marks) {
        return 1;  // Sort in descending order
    } else if (studentA->marks > studentB->marks) {
        return -1;
    } else {
        return 0;
    }
}

void Sorting_Students(struct Student* students, int numStudents) {
    qsort(students, numStudents, sizeof(struct Student), Comparing_Students);
}

int main() {
    int numStudents;
    printf("\n\tEnter the number of students: ");
    scanf("%d", &numStudents);
    getchar();  

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));

    printf("\n Enter student details: (Roll No, Name, Marks):\n");
    for (int i = 0; i < numStudents; i++) {
        char input[100];
        fgets(input, sizeof(input), stdin);
        Parse_String(input, &(students[i]), numStudents);
    }

    Display_Students(students, numStudents);

    Sorting_Students(students, numStudents);

    printf("Students are  sorted in descending order on the based of marks :\n");
    Display_Students(students, numStudents);

    free(students);

    return 0;
}