#include<stdio.h>
#include<ctype.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    printf("putchar() is used to print a single character at a time on the console.\n\n\n");
    printf("toupper() takes a character as an input and converts it into an equivalent upper-case character.\n\n\n");
    printf("This can also be achieved by subtracting 32 from each lowercase character\n to get its equivalent uppercase format. \n\n\n");
    printf("As we know ASCII value of a = %d and that of A = %d.\n\n\n ",'a','A');
    printf("\n\nLet's first get the concept:\n\n\n ");
    printf("\n\nThe uppercase equivalent of letter 'a' is %c.\n\n ",'a'-32);

    int aj = 0;
    char mj[] = " \n\nKeep learning, as what you know will never be enough!\n\n";

    while(mj[aj])   // until string terminates
    {
        // converting one character at a time
        putchar(toupper(mj[aj]));
        aj++;
    }

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}