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
        printf("%d: \n",i);
        for(int e;e<=i;e++)
            printf("*\n");
    }

}
