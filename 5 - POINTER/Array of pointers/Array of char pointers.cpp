#include <stdio.h>
const int MAX = 4;  // Global declaration.

int main()
{

	printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    char *names[] = {"Google", "Amazon", "Facebook", "Apple"}; // initializing an array(here names) of char pointers
    int i = 0;

    for(i = 0; i < MAX; i++)
    {
        printf("Value of names[%d] = %s\n\n", i, names[i]);
    }

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
