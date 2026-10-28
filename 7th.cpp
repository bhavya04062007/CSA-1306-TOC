#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    int i, n, flag=0;

    scanf("%s", s);
    n = strlen(s);

    for(i=0; i<n-2; i++)
    {
        if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
            flag=1;
    }

    if(flag)
        printf("Accepted");
    else
        printf("Rejected");

    return 0;
}
