# include <stdio.h>
# include <stdlib.h>

int main()
{
    char alpha;
    printf ("enter an alphabet:");
    scanf("%c",&alpha);
    if (alpha=='a'||alpha=='e'||alpha=='i'||alpha=='o'||alpha=='u'||alpha=='A'||alpha=='E'||alpha=='I'||alpha=='O'||alpha=='U')
    printf ("%c is a vowel \n",alpha);
    else
    printf ("%c is a consonant \n",alpha);
return 0;
}

