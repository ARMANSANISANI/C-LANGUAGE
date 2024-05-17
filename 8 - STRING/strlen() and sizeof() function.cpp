#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    char aj[] = "Studytonight";
    int length1, length2;

    length1 = sizeof(aj);
    length2 = strlen(aj);

    // need to put in backslash infront to print the quote symbol
    printf("\n\n\nsizeof() of string \"Studytonight\" returns %d and strlen() returns %d.", length1, length2);
    printf("\n\n\nsizeof() also considers \'\\0\' as a part of the string.\n");
    printf("\n\n\nHence, for a predefined string: sizeof() = strlen() + 1 \n");
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
