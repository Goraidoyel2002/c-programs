#include <stdio.h>
int main()
{
    int n,a=0,b=1,c,i;
    printf("enter the number of terms:");
    scanf ("%d,&n");

if (n<=0)
   {
    printf ("enter the positive number");
   }
 else
 {   
    printf ("the first %d fibonacci values are: %d  %d" ,n,a,b);
    c=a+b;
    for ( i = 3; i <=n ; i++)
    {
        printf("%d",c);
        c=a+b;
        a=b;
        b=c;
        c=a+b;
    }
 }
 return 0;
}
