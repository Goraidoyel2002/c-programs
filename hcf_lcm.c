#include <stdio.h>
int main()
{
   int a,  b, i, hcf, lcm ;
   printf("enter the first number:");
   scanf ("%d",&a);
    printf("enter the second number:");
   scanf ("%d",&b);
   for (i=1;i<=a;i++)
   {
       if(a%i==0 && b%i==0)
       {
           hcf=i;
       }
   }
        lcm= (a*b)/hcf;
        printf ("hcf is %d \n", hcf);
        printf ("lcm is %d \n", lcm);

   
}