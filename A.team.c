#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n , x , y , z , counter=0;
    int i;

   scanf("%i", &n);

   for(i=1 ;i<=n ;i++)
   {
        scanf("%i%i%i", &x ,&y ,&z );
       if(x+y+z>=2)
       {
           counter=counter+1 ;

       }

   }
   printf("%i", counter);



    return 0;
}
