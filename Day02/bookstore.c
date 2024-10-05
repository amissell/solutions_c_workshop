#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

void addBook(char titles[][100], char authors[][100], int quantities[], int totalBooks) 
{
    if (totalBooks < MAX_BOOKS) 
    {
        printf("Enter the title of the book: ");
        scanf(" %[^\n]", titles[totalBooks]);
        printf("\nEnter the author of the book: ");
        scanf(" %[^\n]", authors[totalBooks]);
        printf("\nEnter the quantity of the book: ");
        scanf("%d", &quantities[totalBooks]);
        printf("Book added successfully!\n");
    }
    else 
    {
        printf("Book limit reached. Cannot add more books.\n");
    }
}

void displayBooks(char titles[][100], char authors[][100], int quantities[], int totalBooks) 
{
    if (totalBooks == 0) 
    {
        printf("No books available.\n");
    } 
    else 
    {
        printf("\nList of Books:\n");
        for (int i = 0; i < totalBooks; i++) 
        {
            printf("Title: %s\nAuthor: %s\nQuantity: %d\n", titles[i], authors[i], quantities[i]);
        }
    }
}

void searchBook(char titles[][100], char authors[][100], int quantities[], int totalBooks) 
{
    char title[100];
    printf("Enter the title of the book to search: ");
    scanf(" %[^\n]", title);
    int found = 0;
    for (int i = 0; i < totalBooks; i++) 
    {
        if (strcasecmp(titles[i], title) == 0) 
        {
            printf("Book found: Title: %s, Author: %s, Quantity: %d\n", titles[i], authors[i], quantities[i]);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("Book not found.\n");
    }
}

void updateQuantity(char titles[][100], int quantities[], int totalBooks) 
{
    char title[100];
    printf("Enter the title of the book to update: ");
    scanf(" %[^\n]", title);
    int found = 0;
    for (int i = 0; i < totalBooks; i++) 
    {
        if (strcasecmp(titles[i], title) == 0) 
        {
            int newQuantity;
            printf("Enter the new quantity: ");
            scanf("%d", &newQuantity);
            quantities[i] = newQuantity;
            printf("Quantity updated successfully!\n");
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("Book not found.\n");
    }
}

void removeBook(char titles[][100], char authors[][100], int quantities[], int totalBooks) 
{
    char title[100];
    printf("Enter the title of the book to remove: ");
    scanf(" %[^\n]", title);
    int found = 0;
    for (int i = 0; i < totalBooks; i++) 
    {
        if (strcasecmp(titles[i], title) == 0) 
        {
            found = 1;
            for (int j = i; j < totalBooks - 1; j++) 
            {
                strcpy(titles[j], titles[j + 1]);
                strcpy(authors[j], authors[j + 1]);
                quantities[j] = quantities[j + 1];
            }
            (totalBooks)--;
            printf("Book removed successfully!\n");
            break;
        }
    }
    if (!found) 
    {
        printf("Book not found.\n");
    }
}

void displayTotalBooks(int totalBooks) 
{
    printf("Total number of books: %d\n", totalBooks);
}

int main() 
{
    char titles[MAX_BOOKS][100];
    char authors[MAX_BOOKS][100];
    int quantities[MAX_BOOKS];
    int totalBooks = 0;
    int choice = 0;

    while (choice != 7) 
    {
        printf("\nLibrary Stock Management System\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by Title\n");
        printf("4. Update Quantity of a Book\n");
        printf("5. Remove Book\n");
        printf("6. Display Total Number of Books\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) 
        {
            addBook(titles, authors, quantities, totalBooks);
            totalBooks++;
        } 
        else if (choice == 2) 
        {
            displayBooks(titles, authors, quantities, totalBooks);
        } 
        else if (choice == 3) 
        {
            searchBook(titles, authors, quantities, totalBooks);
        } 
        else if (choice == 4) 
        {
            updateQuantity(titles, quantities, totalBooks);
        } 
        else if (choice == 5) 
        {
            removeBook(titles, authors, quantities, totalBooks);
        } 
        else if (choice == 6) 
        {
            displayTotalBooks(totalBooks);
        } 
        else if (choice == 7) 
        {
            printf("Exiting the program.\n");
        } 
        else 
        {
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}