#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    int n, i=0, a=0, b=0;

    scanf("%s", s);
    n = strlen(s);

    while(s[i]=='0')
    {
        a++;
        i++;
    }

    while(s[i]=='1')
        i++;

    while(s[i]=='0')
    {
        b++;
        i++;
    }

    if(i==n && a==b)
        printf("Accepted");
    else
        printf("Rejected");

    return 0;
}
