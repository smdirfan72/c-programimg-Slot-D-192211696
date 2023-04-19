#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

union student {
  char name[MAX_NAME_LENGTH];
  float gpa;
};

int main() {
  union student s;
  printf("Enter student's name: ");
  fgets(s.name, MAX_NAME_LENGTH, stdin);
  s.name[strcspn(s.name, "\n")] = '\0';  
  printf("Enter student's GPA: ");
  scanf("%f", &s.gpa);
  printf("Student's name: %s\n", s.name);
  printf("Student's GPA: %.2f\n", s.gpa);
  return 0;
}
