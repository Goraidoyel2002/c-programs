# include <stdio.h>
int main()
{
    int n, rev=0,d;
    printf("ENTER A NUMBER TO BE REVERSED");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("THE REVERSED NUMBER IS %d",rev);
}