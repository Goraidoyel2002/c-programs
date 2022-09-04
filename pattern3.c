#include<stdio.h>
int main()
{
int n,i,j,k;
printf("Enter no.of rows\n");
scanf("%d",&n);
for(i=n;i>1;i--)
{
    for(j=i;j<=n;j++)
    {
        printf(" ");
    }
    for(k=0;k<(2*i)-1;k++)
    {
        printf("*");
    }
    printf("\n");
}
    for(i=1;i<=n;i++)
{
    for(j=n;j>=i;j--)
    {
        printf(" ");
    }
    for(k=0;k<(2*i)-1;k++)
    {
        printf("*");
    }
    printf("\n");
}
    printf("\n");
    return 0;

}