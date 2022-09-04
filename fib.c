#include <stdio.h>
int main()
{
    int f1=0,f2=1,f3,n;
    printf("enter the value of n \n");
    scanf("%d",&n);
    if (n==1)
    {
        printf("%d",f1);
    }
    else if (n==2)
    {
        printf("%d",f2);
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            f3=f1+f2;
            f1=f2;
            f2=f3;
        }
        printf("the %dth term is %d \n",n,f3);
    }
    return 0;
}
