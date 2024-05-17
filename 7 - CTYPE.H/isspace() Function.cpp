#include<stdio.h>
#include<ctype.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int var1 = '   d';
    int var2 = '2';
    int var3 = '\t';
    int var4 = 'a  ';

    /*
        Returns true if the input parameter is an ASCII value 
        of a white-space character
    */
    if(isspace(var1))
    {
        printf("\n var1 = |%c| is a white-space character\n", var1);
    }
    else
    {
        printf("\n var1 =|%c| is not a white-space character\n", var1);
    }

    if(isspace(var2))
    {
        printf("\n var2 = |%c| is a white-space character\n", var2);
    }
    else
    {
        printf("\n var2 =|%c| is not a white-space character\n", var2);
    }

    if(isspace(var3))
    {
        printf("\n var3 = |%c| is a white-space character\n", var3);
    }
    else
    {
        printf("\n var3 =|%c| is not a white-space character\n", var3);
    }

    if(isspace(var4))
    {
        printf("\n var4 = |%c| is a white-space character\n", var4);
    }
    else
    {
        printf("\n var4 =|%c| is not a white-space character\n", var4);
    }

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
