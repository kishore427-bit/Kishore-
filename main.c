
#include <stdio.h>
#include <string.h>

// Define a structure to represent a book
typedef struct {
    char author[50];
    char title[100];
    float price;
} Book;

int main() {
    // Create a Book structure variable
    Book book;

    // Input book details
    printf("Enter book title: ");
    fgets(book.title, sizeof(book.title), stdin);
    book.title[strcspn(book.title, "\n")] = 0; // Remove newline character

    printf("Enter author name: ");
    fgets(book.author, sizeof(book.author), stdin);
    book.author[strcspn(book.author, "\n")] = 0; // Remove newline character

    printf("Enter book price: ");
    scanf("%f", &book.price);

    // Print book details
    printf("\nBook Details:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: ₹%.2f\n", book.price);

    return 0;
}



