#include <stdio.h>
int main()
{
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");
    printf("******\n");
    int n=6;
    for(int i=1;i<=n;i++)
    {
        printf("%d:",i);
        for(int e=1;e<=i;e++)
           printf("*");printf("\n");


    }

}

