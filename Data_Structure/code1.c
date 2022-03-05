// Problem Statement:

// In-place merge two sorted arrays.
// Given two sorted arrays, X[ ] and Y[ ] of size m and n each, merge elements of X[ ] with elements of
// array Y[ ] by maintaining the sorted order, i.e., fill X[ ] with the first m smallest elements and fill Y[ ]
// with remaining elements.
// For example,
// Input:
// X[] = { 1, 4, 7, 8, 10 }
// Y[] = { 2, 3, 9 }
// Output:
// X[] = { 1, 2, 3, 4, 7 }
// Y[] = { 8, 9, 10 }

#include <stdio.h>

void main()
{
    int m, n;   //declaration of variables for size of arrays
    printf("Enter the size of array x: ");
    scanf("%d", &m);
    printf("Enter the size of array y: ");
    scanf("%d", &n);

    int x[m], y[n]; //declaration of x and y arrays

    // taking input elements of array x
    printf("Enter the elements of x: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &x[i]);
    }

    // taking input elements of array y
    printf("Enter the elements of y: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &y[i]);
    }

    // printing array x
    printf("x: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", x[i]);
    }

    // printing array y
    printf("\ny: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", y[i]);
    }
    printf("\n");

    // inserting elements of array y into array x
    for (int i = 0; i < n; i++)
    {
        x[m] = y[i];
        m++;
    }

    // sorting array x using bubble sort
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (x[j] < x[i])
            {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    int t = 0;
    for (int i = m - n; i < m; i++)
    {
        y[t] = x[i];
        t++;
    }
    m = m - n;

    printf("After merging and sorting array x: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");
    printf("After merging and sorting array y: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", y[i]);
    }
    printf("\n");
}