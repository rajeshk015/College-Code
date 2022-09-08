#include <stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter the Natural number upto which you want sum: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        sum=sum+i;
    }
    printf("Sum = %d\n",sum);

    while(n>=1) {
        printf("%d\n",n);
        n--;
    }
}