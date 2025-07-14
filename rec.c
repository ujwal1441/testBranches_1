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


void searchByRoll(struct Student s[], int n, int roll) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(s[i].roll == roll) {
            printf("\nRecord Found:\n");
            printf("Roll Number: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }
if(!found)
        printf("\nStudent with Roll Number %d not found.\n", roll);
}

