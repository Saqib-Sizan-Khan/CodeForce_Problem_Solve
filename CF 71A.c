#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char ch[102];

    scanf("%d ",&i);

    while(i--)
    {
        gets(ch);

        len = strlen(ch);

        if(len > 10)
        {
            printf("%c%d%c\n",ch[0],len-2,ch[len-1]);
        }

        else
        {
            puts(ch);
        }
    }

    return 0;
}
