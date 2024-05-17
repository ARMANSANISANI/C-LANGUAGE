#include<stdio.h> // Include standard input/output library

int test(int x, int y, int z)
{
    // Function to check if 'x' is between 'y' and 'z' inclusive, or vice versa
if ((x>=y && x<=z)||(x<=y && x>=z)) 
return 1; // Return 1 if the condition is true
else
return 0; // Return 0 if the condition is false
}

int main()
{
int x, y, z; // Declare variables for input integers

    // Prompt the user to input the first integer
printf("Input the first integer: ");

    // Read the first integer from the user and store it in 'x'
scanf("%d", &x);

    // Prompt the user to input the second integer
printf("Input the second integer: ");

    // Read the second integer from the user and store it in 'y'
scanf("%d", &y);

    // Prompt the user to input the third integer
printf("Input the third integer: ");

    // Read the third integer from the user and store it in 'z'
scanf("%d", &z);

    // Print a newline for formatting
printf("\n");

    // Print the prompt for finding the second largest number among the three integers
printf("Second largest number among said three integers: ");

    // Check conditions using the 'test' function and print the result
if (test(x,y,z))
printf("%d\n",x);
else if (test(y,x,z)) 
printf("%d\n",y);
else
printf("%d\n",z); 

    // Return 0 to indicate successful program execution
return 0;
} 
