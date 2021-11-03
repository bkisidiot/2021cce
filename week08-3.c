#include <stdio.h>
int main()
{
    for(int now=1;now<=10;now++)
    {
        int bad=0;
        for(int i=2;i<now;i++)
        {
            if(now%i==0)bad=1;
        }
        if (bad==0) printf("%d ",now);
    }


}
