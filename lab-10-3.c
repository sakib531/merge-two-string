#include<stdio.h>
#include<string.h>

int main()
{
    char s1[50],s2[50];
    int i,j;

    printf("Enter the first value :\n");
    gets(s1);

    printf("Enter the second value:\n");
    gets(s2);

    for(i=0; s1[i]!='\0'; i++);

    for(j=0; s2[j]!='\0'; j++,i++)
    {
        s1[i]=s2[j];
    }
    s1[i]='\0';

    printf("output value: %s",s1);

return 0;
}

