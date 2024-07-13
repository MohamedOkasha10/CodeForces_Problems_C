#include<stdio.h>

unsigned int w  ;

int main()
{

    scanf("%i", &w);

    if (w%2==0 && w >2 )
    {
        printf("YES");
    }
    else
    {
        printf("NO");

    }
    return 0;
}
