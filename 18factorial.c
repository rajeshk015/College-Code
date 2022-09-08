#include <stdio.h>
int main()
{
    int num, fact=1;
    printf("Enter a number to know it's factorial: ");
    scanf("%d",&num);
    for (int i=1; i<=num; i++) {
        fact=fact*i;
    }
    printf("%d",fact);
}