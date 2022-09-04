# include <stdio.h>
int main()
{
    int i,n,sum=0,d;
    printf("ENTER A NUMBER");
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
    }
    printf("SUM OF THE DIGITS IS %d",sum);
}