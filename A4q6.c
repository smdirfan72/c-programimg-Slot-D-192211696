#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STUDENTS 100
struct student {
    int roll_no;
    char stud_name[50];
    int mark1;
    int mark2;
    int mark3;
    int total_marks;
    float avg_marks;
};
struct student students[MAX_STUDENTS];
int num_students = 0;
void add_student()
{
    if (num_students == MAX_STUDENTS) {
        printf("Maximum number of students reached.\n");
        return;
    }
    struct student new_student;
    printf("Enter roll number: ");
    scanf("%d", &new_student.roll_no);
    getchar();  // Consume the newline character
    printf("Enter student name: ");
    fgets(new_student.stud_name, 50, stdin);
    printf("Enter marks in three subjects: ");
    scanf("%d %d %d", &new_student.mark1, &new_student.mark2, &new_student.mark3);
    new_student.total_marks = new_student.mark1 + new_student.mark2 + new_student.mark3;
    new_student.avg_marks = (float)new_student.total_marks / 3.0;
    students[num_students++] = new_student;
    printf("Student added successfully.\n");
}
void display_student(struct student s)
{
    printf("Roll number: %d\n", s.roll_no);
    printf("Student name: %s", s.stud_name);
    printf("Marks in three subjects: %d %d %d\n", s.mark1, s.mark2, s.mark3);
    printf("Total marks: %d\n", s.total_marks);
    printf("Average marks: %.2f\n", s.avg_marks);
}
void display_all_students()
{
    if (num_students == 0) {
        printf("No students found.\n");
        return;
    }
    printf("Listing all students:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d:\n", i+1);
        display_student(students[i]);
    }
}
void sort_students_descending()
{
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = i+1; j < num_students; j++) {
            if (students[i].total_marks < students[j].total_marks) {
                struct student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    printf("Students sorted in descending order of marks.\n");
}
int main()
{
    int choice;
    do {
        printf("\nMenu:\n");
        printf("1. Add student details.\n");
        printf("2. Display student details.\n");
        printf("3. Sort students in descending order of marks.\n");
        printf("4. Exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // Consume the newline character
        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                display_all_students();
                break;
            case 3:
                sort_students_descending();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 4);
    return 0;
}
