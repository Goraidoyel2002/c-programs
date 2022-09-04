#include<stdio.h>
void dupremove(int, int ar[]);
void main()
{
int n, ar[100];
int i;
printf("Enter the number of elements : ");
scanf("%d", &n);
printf("Enter the array elements : ");
for(i=0; i<n; i++)
scanf("%d", &ar[i]);
printf("Array : [ ");
for(i=0; i<n; i++)
printf("%d ", ar[i]);
printf("]");
dupremove(n, ar);
}
void dupremove(int n, int ar[])
{
int i, j, k;
for(i=0; i<n-1; i++)
{
for(j=i+1; j<n; j++)
{
if(ar[i]==ar[j])
{
for(k=j; k<n-1; k++)
{
ar[k]=ar[k+1];
}
n--;
j--;
}
}
}

printf("\nAfter removing the duplicate element.\nArray : [ ");
for(i=0; i<n; i++)
printf("%d ", ar[i]);
printf("]");
}
