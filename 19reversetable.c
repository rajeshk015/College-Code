#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to print it's table in reverse: ");
    scanf("%d",&num);
    for(int i=10; i>=1; i--) {
        printf("%d * %d = %d\n",num,i,num*i);
    }
}