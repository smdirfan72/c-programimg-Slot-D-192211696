#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main() {

    char filename[50], search[50], line[100];

    printf("Enter the name of the file: ");

    scanf("%s", filename);

    printf("Enter the search string: ");

    scanf("%s", search);

    FILE *fp = fopen(filename, "r");

    if (fp == NULL) {

        printf("Error opening file.\n");

        return 1;

    }

    while (fgets(line, 100, fp) != NULL) {

        if (strstr(line, search) != NULL) {

            printf("%s", line);

        }

    }

    fclose(fp);

    return 0;

}
