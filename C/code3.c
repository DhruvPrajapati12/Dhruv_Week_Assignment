// Problem Statement:

// Search and Sequence
// Consider an integer array ‘a’ of size 10, where the value of the array elements are
// {1,5,4,8,9,2,0,6,11,7}. Write a program to
// ▪ Find whether the given element exists in an array or not. If the element exists in an
// array, display YES else NO.
// ▪ To print a number following a sequence of elements in an array i.e., 15489206117.

#include <stdio.h>
#include <string.h>

int main()
{
    int ele, flag = 0, i;
    int a[] = {1,5,4,8,9,2,0,6,11,7};   //initializing array a

    printf("Enter the element do you want to search: ");
    scanf("%d", &ele);

    for(i=0; i < 10;i++)        //searching for element in array a
    {
        if(ele == a[i])
        {
            flag = 1;
            break;
        }
    }   //end of for loop

    //If element is found then flag=1, otherwise flag=0
    if(flag == 1)
    {
        printf("YES\n");
        printf("%d is found at %dth position\n", ele, i+1);
    }
    else 
    {
        printf("NO\n");
    }

    printf("Number following a sequence of elements in an array : ");
    for(int i=0; i<10; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}   //end of main function