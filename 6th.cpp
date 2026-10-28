#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    int i=0, z=0, o=0;

    scanf("%s", s);

    while(s[i]=='0')
    {
        z++;
        i++;
    }

    while(s[i]=='1')
    {
        o++;
        i++;
    }

    if(s[i]=='\0' && z==o)
        printf("Accepted");
    else
        printf("Rejected");

    return 0;
}
