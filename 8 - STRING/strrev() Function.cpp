#include<stdio.h>
#include<string.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    char aj[1000];
    printf("\n\nstrrev(string): Function to reverse the string and storing in the same string.\n\n\n");
    printf("\n\nEnter the string: ");
    gets(aj);
    /*
        system defined function to reverse the string 
        and storing in the same string
    */
    strrev(aj); 
    printf("\n\nReverse of entered string is: %s", aj);
    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
