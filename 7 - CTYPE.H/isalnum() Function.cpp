#include<stdio.h>
#include<ctype.h> // to make use of system defined function isalnum()

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    /*
        As datatypes are int, hence all the variables store the 
        ASCII values of the character on the RHS
    */
    int var1 = 'd';
    int var2 = '2';
    int var3 = '%';
    int var4 = ' ';

    /*
        Returns true if the input parameter is an ASCII value 
        of an alphanumberic character
    */
    if(isalnum(var1)) 
    {
        printf("\n var1 = |%c| is alphanumeric\n", var1);
    }
    else
    {
        printf("\nvar1 =|%c| is not alphanumeric\n", var1);
    }

    if(isalnum(var2))
    {
        printf("\n var2 = |%c| is alphanumeric\n", var2);
    }
    else
    {
        printf("\nvar2 =|%c| is not alphanumeric\n", var2);
    }

    if(isalnum(var3))
    {
        printf("\n var3 = |%c| is alphanumeric\n", var3);
    }
    else
    {
        printf("\nvar3 =|%c| is not alphanumeric\n", var3);
    }

    if(isalnum(var4))
    {
        printf("\n var4 = |%c| is alphanumeric\n", var4);
    }
    else
    {
        printf("\nvar4 =|%c| is not alphanumeric\n", var4);
    }

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
