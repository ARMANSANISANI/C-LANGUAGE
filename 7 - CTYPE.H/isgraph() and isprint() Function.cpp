#include<stdio.h>
#include<ctype.h> // to use isgraph() and isprint() method

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    /*
        As datatypes are int, hence all the variables store the 
        ASCII values of the character on the rhs
    */
    int var1 = 'D';
    int var2 = '2';
    int var3 = ' \t';
    int var4 = 'Y';

    /*
        Returns true if the input parameter is an 
        ASCII value of an alphanumberic character
    */
    if(isgraph(var1)) 
    {
        printf("\n var1 = |%c| can be printed\n", var1);
    }
    else
    {
        printf("\n var1 =|%c| cannot be printed\n", var1);
    }

    if(isprint(var2))
    {
        printf("\n var2 = |%c| can be printed\n", var2);
    }
    else
    {
        printf("\n var2 =|%c| can't be printed\n", var2);
    }

    if(isgraph(var3))
    {
        printf("\n var3 = |%c| can be printed\n", var3);
    }
    else
    {
        printf("\n var3 =|%c| can't be printed\n", var3);
    }

    if(isprint(var4))
    {
        printf("\n var4 = |%c| can be printed\n", var4);
    }
    else
    {
        printf("\n var4 =|%c| can't be printed\n", var4);
    }

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
