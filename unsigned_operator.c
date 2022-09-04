# include <stdio.h>
int main()
{
    int n;
    int a=0,b=0;
    printf("enter a number");
    scanf("%d",&n);
    while (n>0)
    {
        if (n&1)
        {
        a=a+1;
        n=n>>1;
    }
else
{
    b=b+1;
    n=n>>1;
}
    }
    printf("the number of zeroes=%d",b);
    printf ("the number of 1s=%d",a);
    return 0;
}