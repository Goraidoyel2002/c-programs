#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c)
	{
		printf("%d is smallest\n",a);
		if(b>c)
			printf("%d is largest\n",b);
		else
			printf("%d is largest\n",c);
	}
	else if(b<a && b<c)
	{
		printf("%d is smallest\n",b);
		if(a>c)
			printf("%d is largest\n",a);
		else
			printf("%d is largest\n",c);
	}
	else if(c<a && c<b)
	{
		printf("%d is smallest\n",c);
		if(a>c)
			printf("%d is largest\n",a);
		else
			printf("%d is largest\n",b);
	}
	return 0;
}
12