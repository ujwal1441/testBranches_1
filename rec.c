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
printf("Name: ");
        scanf(" %[^\n]", s[i].name);
 printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}
void displayStudents(struct Student s[], int n) {
    printf("\nStudent Records:\n");
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i+1);
 printf("Roll Number: %d\n", s[i].roll);
printf("Name: %s\n", s[i].name);
