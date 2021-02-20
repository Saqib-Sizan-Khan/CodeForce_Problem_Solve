#include<stdio.h>
#include<string.h>
int main()
{
    char st1[102],st2[102];

    gets(st1);
    gets(st2);

    strlwr(st1);
    strlwr(st2);

    if(strcmp(st1,st2)== 1)
    {
        printf("1\n");
    }

    else if(strcmp(st1,st2)== 0)
    {
        printf("0\n");
    }

    else
    {
        printf("-1\n");
    }

    return 0;
}
