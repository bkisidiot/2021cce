#include <stdio.h>
int b[10000000]={0};
int main()
{
	printf("請問你要幾個質數?");
	int m;
	scanf("%d",&m);
	int ans=0;
	for(int i=2;ans<m;i++){
		if (b[i]==0){
			ans++;
			printf("%d\n",i);
			for(int k=i+i;k<10000000;k+=i){

				b[k]=1;
			}

		}

	}
    ///printf("%d\n",ans);
}

