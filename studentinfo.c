#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
    float gpa;
    char section;
};
int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    fflush(stdin);  
    struct Student students[numStudents];
    for (int i = 0; i < numStudents; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%[^\n]s", students[i].name);
        fflush(stdin); 
        printf("Age: ");
        scanf("%d", &students[i].age);
        fflush(stdin);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);
        fflush(stdin);
        printf("Section: ");
        scanf("%c", &students[i].section);
        fflush(stdin);
    }
    printf("\nStudent Information:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %.2f\n", students[i].gpa);
        printf("Section: %.2f\n", students[i].section);
        printf("\n");
    }

    return 0;
}
