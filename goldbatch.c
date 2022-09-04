#include<stdio.h>
int main()
{
    int a,f=0;
    printf("enter an even number to split it into two prime numbers \n");
    scanf("%d",&a);
    for (int i = 2; i <= a/2; ++i)
    {
        if (a%i==0)
        {
            f=1;
            break;
        }
    }
    for (int i = 2; i <= a/2; i++)
    {
        if (f==1)
        {
            if ((a-i)%i!=0)
            {
                printf("%d can be expressed as prime numbers %d and %d",a,i,a-i);
                break;
            }            
        }
        
    }
    return 0;
}