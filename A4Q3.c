#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student {
  char name[50];
  int roll_number;
  int birthday[3];
  int admission_date[3];
};

int main() {
  struct student s;
  int year, month, day;
  time_t now;
  printf("Enter name: ");
  scanf("%s", s.name);
  printf("Enter roll number: ");
  scanf("%d", &s.roll_number);
  printf("Enter birthday (DD MM YYYY): ");
  scanf("%d %d %d", &s.birthday[0], &s.birthday[1], &s.birthday[2]);
  printf("Enter admission date (DD MM YYYY): ");
  scanf("%d %d %d", &s.admission_date[0], &s.admission_date[1], &s.admission_date[2]);
  time(&now);
  struct tm *local = localtime(&now);
  year = local->tm_year + 1900;
  month = local->tm_mon + 1;
  day = local->tm_mday;
  int age = year - s.birthday[2];
  if (s.birthday[1] > month || (s.birthday[1] == month && s.birthday[0] > day)) {
    age--;
  }
  int admission_age = s.admission_date[2] - s.birthday[2];
  if (s.birthday[1] > s.admission_date[1] || (s.birthday[1] == s.admission_date[1] && s.birthday[0] > s.admission_date[0])) {
    admission_age--;
  }
  printf("\nName: %s", s.name);
  printf("\nRoll number: %d", s.roll_number);
  printf("\nBirthday: %02d/%02d/%04d", s.birthday[0], s.birthday[1], s.birthday[2]);
  printf("\nAdmission date: %02d/%02d/%04d", s.admission_date[0], s.admission_date[1], s.admission_date[2]);
  printf("\nAge at the time of admission: %d", admission_age);

  return 0;
}
