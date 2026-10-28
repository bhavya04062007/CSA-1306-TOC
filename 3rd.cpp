#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    int i, n, flag=1;

    scanf("%s", s);
    n = strlen(s);

    if(s[0]!='0' || s[n-1]!='1')
        flag=0;

    for(i=0; i<n; i++)
        if(s[i]!='0' && s[i]!='1')
            flag=0;

    if(flag)
        printf("Accepted");
    else
        printf("Rejected");

    return 0;
}
