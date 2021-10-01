///第5張圖 (step02-3)
///搞懂 printf()裡如果有塞入很多%d會怎麼樣?
#include <stdio.h>
int main()
{
    printf( "Hello World\n");
    printf( "Hello%dWorld\n", 300);
    printf( "%d %d    %d" , 300, 200, 100 );
}           ///.  ....
