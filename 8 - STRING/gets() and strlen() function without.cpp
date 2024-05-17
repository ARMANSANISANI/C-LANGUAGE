#include<stdio.h>
int main()
{
    printf("Studytonight - Best place to learn\n");
    char a[1000];
    int i = 0;
    printf("Enter the string: ");
    gets(a);
    // \0 marks the end of the string
    for(i = 0; a[i] != '\0' ;i++);   // updation is done after checking condition
    printf("The length of the input string is : %d", i);
    printf("\nCoding is Fun !");
    return 0;
}
