#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the three numbers: ");
    scanf("%d%d%d",&num1, &num2, &num3);
    printf("The average is: %d\n",(num1+num2+num3)/3);
}