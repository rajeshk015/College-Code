#include <stdio.h>
int main()
{
    int num;
    float f;
    printf("Enter a number: ");
    scanf("%f",&f);
    num=f;
    if(num==f) {
        printf("Yes, %d is a Natural Number.\n",num);
    }
    else {
        printf("No, %.1f is not a Natural Number.\n",f);
    }
}