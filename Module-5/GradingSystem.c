#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);

    if (marks >= 33 && marks <= 100)
    {
        printf("You are Passed\n");
        if (marks >= 90 && marks <= 100)
        {
            printf("You are getting Scholarship\n");
        }

        else if (marks >= 80 && marks <= 89)
        {
            printf("You are getting 'A+' grade");
        }
        else if (marks >= 70 && marks <= 79)
        {
            printf("You are getting 'A' grade");
        }
        else if (marks >= 60 && marks <= 69)
        {
            printf("You are getting 'B+' grade");
        }
        else if (marks >= 50 && marks <= 59)
        {
            printf("You are getting 'B-' grade");
        }
        else if (marks >= 40 && marks <= 49)
        {
            printf("You are getting 'C' grade");
        }
        else if (marks >= 33 && marks <= 39)
        {
            printf("You are getting 'D' grade");
        }
    }
    else
    {
        if (marks >= 0 && marks <= 32)
        {
            printf("You are getting 'F' grade");
            printf("You are failled\n");
        }
        else
            printf("Invalid marks");
    }
}