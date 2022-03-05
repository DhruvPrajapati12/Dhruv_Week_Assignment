// Problem Statement:

// Write a menu driven program that depicts the working of a library. The menu
// options should be:
// 1. Add book information
// 2. Display book information
// 3. List all books of given author
// 4. List the title of specified book
// 5. List the count of books in the library
// 6. List the books in the order of accession number
// 7. Exit
// Create a structure called library to hold accession number, title of the book, author
// name, price of the book, and flag indicating whether the book is issued or not.

#include <stdio.h>
#include <string.h>

//creating structure of library

struct library
{
    int acc_number;
    char title[50];
    char author[50];
    float price;
    char flag;
}l[10]; //declaring array of books

int main()
{
    int in=0, acc_number, count=0;
    char title[50];
    char author[50];
    char flag;
    float price;

    // struct library l1, l2;

    // l1.acc_number = 1754;
    // strcpy(l1.title, "c programming language");
    // strcpy(l1.author, "Dhruv Prajapati");
    // l1.price = 499;
    // l1.flag = 'y';

    // l2.acc_number = 1456;
    // strcpy(l2.title, "java programming language");
    // strcpy(l2.author, "Het shah");
    // l2.price = 399;
    // l2.flag = 'n';
    
    while(in < 7)
    {
        printf("\nWelcome to Library\n");
        printf("\nPlease choose appropriate option\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List the title of specified book\n");
        printf("5. List the count of books in the library\n");
        printf("6. List the books in the order of accession number\n");
        printf("7. Exit\n");
        scanf("%d", &in);

        switch (in)
        {
        case 1:
            printf("\nEnter the accession number: ");
            scanf("%d", &acc_number);
            
            printf("Enter the title: ");
            scanf("%s", title);
            //fflush(stdin);

            printf("Enter author name: ");
            scanf("%s", author);
            //fflush(stdin);

            printf("Enter the price: ");
            scanf("%f", &price);
            
            printf("If Book is issued then enter 'y' otherwise 'n':  ");
            scanf(" %c", &flag);

            l[count].acc_number = acc_number;
            strcpy(l[count].title, title);
            strcpy(l[count].author, author);
            l[count].price = price;
            l[count].flag = flag;
            count++;

            printf("\nInformation added successfully\n");
            break;

        case 2:
            if(count==0)
            {
                printf("\nThere is no data in library\n");
                break;
            }
            printf("\nAcc number\tTitle\t\tAuthor name\tPrice\tFlag\n");
            // printf("%d      %s      %s      %0.2f       %c\n", l1.acc_number, l1.title, l1.author, l1.price, l1.flag);
            // printf("%d      %s      %s      %0.2f       %c\n", l2.acc_number, l2.title, l2.author, l2.price, l2.flag);
            for (int i = 0; i < count; i++)
            {
                if(count==0)
                {
                    break;
                }
                printf("%d\t\t%s\t\t%s\t\t%0.2f\t\t%c\n", l[i].acc_number, l[i].title, l[i].author, l[i].price, l[i].flag);
            }
            break;

        case 3:
            if(count==0)
            {
                printf("\nThere is no data in library\n");
                break;
            }

            printf("\nEnter the author name: ");
            scanf("%s", author);
            for (int i = 0; i < count; i++)
            {
                if(strcmp(l[i].author, author) == 0)
                {
                   printf("\nAcc number\tTitle\t\tAuthor name\tPrice\tFlag\n");
                   printf("%d\t\t%s\t\t%s\t\t%0.2f\t\t%c\n", l[i].acc_number, l[i].title, l[i].author, l[i].price, l[i].flag); 
                }
            }
            break;

        case 4:
            if(count==0)
            {
                printf("\nThere is no data in library\n");
                break;
            }

            printf("\nFollowing is the list of title of the books\n");
            for (int i = 0; i < count; i++)
            {
                printf("%s\n", l[i].title); 
            }
            break;

        case 5:
            printf("\nTotal no of books in this library is %d\n", count);
            break;

        case 6:
            if(count==0)
            {
                printf("\nThere is no data in library\n");
                break;
            }
            for(int i=0; i < count ; i++)
            {
                for(int j = i+1; j < count ; j++)
                {
                    if(l[j].acc_number < l[i].acc_number)
                    {
                        int temp = l[i].acc_number;
                        l[i].acc_number = l[j].acc_number;
                        l[j].acc_number = temp;
                    }
                }
            }
            printf("\nBooks in ascending order of index number is: \n");
            printf("\nAcc number\tTitle\t\tAuthor name\tPrice\tFlag\n");
            for (int i = 0; i < count; i++)
            {
                printf("%d\t\t%s\t\t%s\t\t%0.2f\t\t%c\n", l[i].acc_number, l[i].title, l[i].author, l[i].price, l[i].flag);
            }
            break;
            
        case 7:
            return 0;
            
        }
    }
}