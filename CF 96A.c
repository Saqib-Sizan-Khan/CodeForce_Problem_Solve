#include<stdio.h>
#include<string.h>
int main()
{
    char f[102];
    int len,i,p=1,result=0;

    gets(f);

    len = strlen(f);

    for(i=0; i<len; i++)
    {
        if(f[i]==f[i+1])
        {
            p++;

            if(p==7)break;
        }

        else
        {
            p=1;
        }
    }

    if(p == 7)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

    return 0;
}
