#include <stdio.h>

union data {
  int i;
  float f;
};

int main() {
  union data d;
  int choice;

  printf("Enter 1 for integer, 2 for float: ");
  scanf("%d", &choice);

  if (choice == 1) {
    printf("Enter an integer: ");
    scanf("%d", &d.i);
    printf("You entered the integer: %d\n", d.i);
  } else if (choice == 2) {
    printf("Enter a float: ");
    scanf("%f", &d.f);
    printf("You entered the float: %f\n", d.f);
  } else {
    printf("Invalid choice.\n");
  }

  return 0;
}
