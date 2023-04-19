#include <stdio.h>
#include <stdlib.h>

struct Data {
    int id;
    char name[20];
    double value;
};

int main() {
    FILE *file;
    struct Data data;

    file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Error: unable to open binary file.\n");
        exit(EXIT_FAILURE);
    }
    while (fread(&data, sizeof(struct Data), 1, file) == 1) {
        printf("ID: %d\n", data.id);
        printf("Name: %s\n", data.name);
        printf("Value: %.2f\n\n", data.value);
    }

    fclose(file);

    return 0;
}
