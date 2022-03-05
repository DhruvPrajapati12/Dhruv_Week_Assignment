// Problem Statement:

// Write a function that receives marks received by a student in 3 subjects
// and returns the total and percentage of these marks. Call this function from
// main( ) and print the results in main( ).

#include <stdio.h>

//creating structure of result 

struct result
{
    int total;
    float percentage;
};

//This function receives a marks of 3 subject and returns the structure of result
struct result getResult(int s1, int s2, int s3)
{
    struct result r1;
    int total = s1 + s2 + s3;
    float percentage = ((float)total / 3);
    r1.total = total;
    r1.percentage = percentage;
    return r1;
}

void main()
{
    int s1, s2, s3;     //declaration of variables of 3 subject's marks
    struct result r;
    printf("Enter the marks of maths: ");
    scanf("%d", &s1);
    printf("Enter the marks of science: ");
    scanf("%d", &s2);
    printf("Enter the marks of english: ");
    scanf("%d", &s3);
    r = getResult(s1, s2, s3);  //calling getResult function
    printf("Total marks of 3 subjects: %d \n", r.total);
    printf("Percentage of 3 subjects: %0.2f \n", r.percentage);
}   //end of main function