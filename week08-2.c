#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)a=1;
    }
    if (a==0) printf("%d�O���",n);
    else printf("%d���O���",n);


}
