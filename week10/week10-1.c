#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int now=2;now<=n;now++)
	{
		int bad=0;
		for(int i=2;i<now;i++)
		{
			if(now%i==0)bad=1;


		}
		if(bad==0){
            ans++;
            printf("%d",now);
		}
    }
	 printf("\nAns: %d\n",ans);

}




