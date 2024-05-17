#include<stdio.h>
#include<string.h>

int main()
{
    printf("Studytonight - Best place to learn\n");
    char a[100];
    int length;
    printf("Enter a string you wish to calculate the length of : ");
    /*
        to take a single string (including spaces) 
        as input at a time
    */
    gets(a);
    /*
        Return the length of the string 
        or the number of characters in the string
    */
    length = strlen(a);
    printf("The length of the input string is: %d", length);
    printf("\nCoding is Fun !");
    return 0;
}
