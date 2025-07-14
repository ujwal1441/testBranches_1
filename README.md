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
printf("Marks: %.2f\n", s[i].marks);
    }
}
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
int main() {
    struct Student students[MAX_STUDENTS];
    int choice, roll;

    inputStudents(students, MAX_STUDENTS);

    do {
        printf("\nMenu:\n");
        printf("1. Display all students\n");
        printf("2. Search by Roll Number\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displayStudents(students, MAX_STUDENTS);
                break;
                case 2:
                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);
                searchByRoll(students, MAX_STUDENTS, roll);
                break;
        case 3:
                printf("Exiting program.\n");
                break;
        default:
                printf("Invalid choice. Try again.\n");
        }
    } while(choice != 3);

    return 0;
}
