#include <stdio.h>
int main()
{   char str;
    printf("Enter a character: ");
    scanf("%c",&str);
    printf("%d",str>='0' && str<='9');
}