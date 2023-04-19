#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char title[100];
    char author[50];
    int year;
} Book;
typedef struct {
    Book books[100];
    int count;
} Library;
void add_book(Library* lib) {
    Book book;
    printf("Enter book title: ");
    fgets(book.title, 100, stdin);
    printf("Enter book author: ");
    fgets(book.author, 50, stdin);
    printf("Enter year of publication: ");
    scanf("%d", &book.year);
    getchar();  
    lib->books[lib->count] = book;
    lib->count++;
    printf("Book added successfully!\n");
}
void display_books(Library* lib) {
    printf("All books in the library:\n");
    for (int i = 0; i < lib->count; i++) {
        printf("%s by %s (%d)\n", lib->books[i].title, lib->books[i].author, lib->books[i].year);
    }
    }
void list_books_by_author(Library* lib) {
    char author[50];
    printf("Enter author name: ");
    fgets(author, 50, stdin);
    printf("Books by %s:\n", author);
    for (int i = 0; i < lib->count; i++) {
        if (strcmp(lib->books[i].author, author) == 0) {
            printf("%s (%d)\n", lib->books[i].title, lib->books[i].year);
        }
    }
}
void list_count_of_books(Library* lib) {
    printf("The library currently has %d books.\n", lib->count);
}

int main() {
    Library lib = { .count = 0 };  
    int choice;
    do {
        printf("Library menu:\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        getchar(); 
        switch (choice) {
            case 1:
                add_book(&lib);
                break;
            case 2:
                display_books(&lib);
                break;
            case 3:
                list_books_by_author(&lib);
                break;
            case 4:
                list_count_of_books(&lib);
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number from 1-5.\n");
        }
    } while (choice != 5);
    return 0;
}
