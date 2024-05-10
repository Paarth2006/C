#include <stdio.h>
#define MAX_STUDENTS 450

struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    char course[50];
    int yearOfJoining;
};
void Year(const struct Student students[], int n, int year) {
    printf("Students who joined in %d:\n", year);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].yearOfJoining == year) {
            printf("%s\n", students[i].name);
            found = 1;
        }
    }
    if (!found)
        printf("No students found who joined in %d.\n", year);
}
void RollNumber(const struct Student students[], int n, int rollNumber) {
    for (int i = 0; i < n; i++) {
        if (students[i].rollNumber == rollNumber) {
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].yearOfJoining);
            return;
        }
    }
    printf("Student with roll number %d not found.\n", rollNumber);
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents, year, rollNumber;
    printf("\t\t****INPUT*****\n");
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Department: ");
        scanf("%s", students[i].department);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Year of Joining: ");
        scanf("%d", &students[i].yearOfJoining);
    }
    printf("\nEnter the year to find students who joined in that year: ");
    scanf("%d", &year);
    printf("\t\t*****OUTPUT*****\n");
    Year(students, numStudents, year);
    printf("\nEnter the roll number to find the corresponding student's data: ");
    scanf("%d", &rollNumber);
    printf("\t\t*****OUTPUT*****\n");
    RollNumber(students, numStudents, rollNumber);

    return 0;
}