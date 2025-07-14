#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5

struct Student {
    int roll;
    char name[50];
    float marks;
};

void inputStudents(struct Student s[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i+1);
printf("Roll Number: ");
        scanf("%d", &s[i].roll);

int main() {
    struct Student students[MAX_STUDENTS];
    int choice, roll;

    inputStudents(students, MAX_STUDENTS);

    do {
        printf("\nMenu:\n");
        printf("1. Display all students\n");
        printf("2. Search by Roll Number\n");
