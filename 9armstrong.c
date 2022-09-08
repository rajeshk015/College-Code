#include <stdio.h>
#include<math.h>
int main()
{
    int num1, num2, x, y=0, z;
    printf("Enter a number to check: ");
    scanf("%d", &num1);
    x=num1;
    while(num1!=0) {
        z=num1%10;
        //num2=pow(z,3);
        y+=z*z*z;
        //y=y+num2;
        num1=num1/10;
    }
    if(y==x) {
        printf("%d is an Armstrong No.\n",x);
    }
    else {
        printf("%d is not an Armstrong No.\n",x);
    }
}