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
