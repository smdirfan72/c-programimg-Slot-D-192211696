#include <stdio.h>
#include <math.h>

union shape {
  float radius;
  struct {
    float length;
    float width;
  } rectangle;
};

int main() {
  union shape s;
  char shape_type;
  printf("Enter shape type (c for circle, r for rectangle): ");
  scanf("%c", &shape_type);
  if (shape_type == 'c') {
    printf("Enter circle radius: ");
    scanf("%f", &s.radius);
    float area = M_PI * s.radius * s.radius;
    printf("Circle area: %.2f\n", area);
  } else if (shape_type == 'r') {
    printf("Enter rectangle length: ");
    scanf("%f", &s.rectangle.length);
    printf("Enter rectangle width: ");
    scanf("%f", &s.rectangle.width);
    float area = s.rectangle.length * s.rectangle.width;
    printf("Rectangle area: %.2f\n", area);
  } else {
    printf("Invalid shape type\n");
  }
  return 0;
}
