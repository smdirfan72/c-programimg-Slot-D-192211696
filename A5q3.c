#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main() {
    FILE *input_file = fopen("input.txt", "r");
    FILE *output_file = fopen("output.txt", "w");

    if (input_file == NULL || output_file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    char line[MAX_LINE_LENGTH];

    while (fgets(line, MAX_LINE_LENGTH, input_file) != NULL) {
        char *match = strstr(line, "red");

        while (match != NULL) {
            strncpy(match, "blue", 4);
            match = strstr(match + 4, "red");
        }

        fputs(line, output_file);
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
}
