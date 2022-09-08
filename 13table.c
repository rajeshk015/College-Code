#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of which you want the table: ");
    scanf("%d",&n);
    for(int i=1; i<=10; i++) {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}