#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    int n;

    scanf("%s", s);
    n = strlen(s);

    if(s[0]=='b' && s[n-1]=='a')
        printf("Accepted");
    else
        printf("Rejected");

    return 0;
}
