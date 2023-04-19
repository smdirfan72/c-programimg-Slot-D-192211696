#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    FILE *input_file, *error_file;
    char line[MAX_LINE_LENGTH];


    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error: unable to open input file.\n");
        exit(EXIT_FAILURE);
    }

    
    error_file = fopen("error_log.txt", "w");
    if (error_file == NULL) {
        printf("Error: unable to open error log file.\n");
        exit(EXIT_FAILURE);
    }

 
    while (fgets(line, MAX_LINE_LENGTH, input_file) != NULL) {
        // check if the line contains the word "error"
        if (strstr(line, "error") != NULL) {
            // write the line to the error log file
            fputs(line, error_file);
        }
    }


    fclose(input_file);
    fclose(error_file);

    
    error_file = fopen("error_log.txt", "r");
    if (error_file == NULL) {
        printf("Error: unable to open error log file.\n");
        exit(EXIT_FAILURE);
    }

    while (fgets(line, MAX_LINE_LENGTH, error_file) != NULL) {
        printf("%s", line);
    }
    fclose(error_file);

    return 0;
}
