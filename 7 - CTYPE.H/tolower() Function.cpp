#include<stdio.h>
#include<ctype.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    printf("putchar() is used to print a single character at a time on the console.\n\n\n");
    printf("tolower() takes a character as an input and converts it into an equivalent lower-case character.\n\n\n");
    printf("This can also be achieved by adding 32 to each uppercase character\n to get its equivalent lowercase format in ASCII. \n\n\n");
    printf("For example, ASCII value of a = %d and that of A = %d.\n\n\n ", 'a', 'A');
    printf("\n\nLet's first get the concept:\n ");
    printf("\n\nThe lowercase equivalent of letter 'A' is '%c' ",'A'+32);

    int aj = 0;
    char mj[] = " \n\n\n\n\"KEEP LEARNING, AS WHAT YOU KNOW WILL NEVER BE ENOUGH!\"\n\n";    // original uppercase string

    while(mj[aj])   // until string terminates
    {
        // converting one character at a time
        putchar(tolower(mj[aj]));
        aj++;
    }

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
