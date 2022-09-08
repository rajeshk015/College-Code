#include <stdio.h>
int main()
{
    int num1, x, flag=0;
    printf("Enter a number to check if it's Prime or not: ");
    scanf("%d",&num1);
    x=num1;
    if(x>=1) {
        for(int j=2; j<num1; j++)   {
            if(x%j==0) {
                printf("%d is not a Prime Number.\n",x);
                flag=1;
                break;
            }
        }
    }
    if(flag==0) {
        printf("%d is a Prime Number",x);
    }
}