#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,n,add , multi,div,sub;
    
    printf("enter the first number ");
    scanf ("%d",&a);
    printf("enter the second number ");
    scanf ("%d",&b);
    printf ("1 is for addition \n");
    printf ("2 is for substraction \n");
    printf ("3 is for division \n");  
    printf ("4 is for multiplication \n");

    printf("enter your choice:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            add= a+b;
            printf("the answer is: %d \n",add);
            break;
      
        case 2:
            sub= a-b;
            printf("the answer is: %d \n",sub);
            break;

        case 3:
            div = a/b;
            printf("the answer is: %d \n",div);
            break;

      case 4:
            multi = a*b;
            printf("the answer is: %d \n",add);
            break;
        default:
            printf("wrong choice");
    }
}