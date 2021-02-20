#include<stdio.h>
#include<string.h>
int main()
{
    char ch[102];
    int len,i;

    gets(ch);

    strlwr(ch);

    len = strlen(ch);

    for(i=0;i<len;i++)
    {
        if(ch[i]=='a' || ch[i]=='o' || ch[i]=='y' || ch[i]=='e' || ch[i]=='u' || ch[i]=='i')
        {
            printf("");
        }

        else
        {
            printf(".%c",ch[i]);
        }

    }

    return 0;
}
