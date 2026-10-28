#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    int i=0, j, flag=1;

    scanf("%s", s);
    j = strlen(s)-1;

    while(i<j)
    {
        if(s[i]!=s[j])
            flag=0;
        i++;
        j--;
    }

    if(flag)
        printf("Accepted");
    else
        printf("Rejected");

    return 0;
}
