 #include<stdio.h>
void duplicate (int n,int a [])
{
    for(int i = 0 ; i < n ; i++)
    {
        for (int m = i+1; m <= n; m++)
        {
        if(a[i]==a[m])
       {
         
     for(int j = m; j < n-1 ; j++)
     {
        a[j]= a[j+1];
     }
     n--;
     m--;
       }
       }
        }
    
     printf("New array after deleting duplicate elements : \n");
     for(int k = 0 ; k <= n ; k++)
     printf("%d\t",a[k]);
}

int main()
{
int n;
printf("Enter the number of elements :\n");
scanf("%d",&n);
int a[n];
for(int i = 0 ; i < n; i++)
    {
            printf("Enter a value :\n");
            scanf("%d",&a[i]);
            
        }
                     
duplicate(n,a);
}