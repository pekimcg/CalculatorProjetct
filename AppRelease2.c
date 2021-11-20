/*
* This is test 2 of my calculator 
*/

#include<stdio.h>
#include<stdlib.h>

// Main funtions

int main()
{
    int a, b;
    int* n1, * n2;
    char ch;
    n1 = &a;
    n2 = &b;

    //Declare the operation function 

    printf("Select the Operation\n"); // Ask the user what function they would like to use
    printf("Type + for Addition\n"); // Is it addition
    printf("Type - for Subtraction\n"); // is it subtraction
    printf("Type * for Multiplication\n"); // is it multiplication
    printf("Type / for Division\n"); // is it division
    scanf_s("%c", &ch); // take the users input and then procced to the next step
    printf("Enter any two numbers\n"); // ask user to pick two numbers
    scanf_s("%d%d", &a, &b); // take the numbers and now calculate 
    switch (ch)
    {
    case '+':
        printf("%d + %d = %d", a, b, (*n1 + *n2)); // This is the addition operation
        break;
    case '-':
        printf("%d - %d = %d", a, b, (*n1 - *n2)); // This is the subtraction operation
        break;
    case '*':
        printf("%d * %d = %d", a, b, (*n1 * *n2)); // This is the multiplication operation
        break;
    case '/':
        if (*n2 == 0) // if the user wants do divide a number by 0 to display the results! I finally figured it out!!!
        {
            printf("Sorry, You can not divide a number by 0"); // This will print the message that the calculort cannot divide by this number
            return 0;
        }
        printf("%d / %d = %0.2f", a, b, (*n1 / (float)*n2));// When the user doesnt choose any of the given functions and types in anything else
        break;
    default:
        printf("Sorry, Invalid Choice"); // The calculator will tell the user that this is an invalid operation. 
    }
    return 0;
}
