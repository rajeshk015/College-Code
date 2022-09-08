#include <stdio.h>
int main()
{
    int num;
    do {
        printf("Enter numbers: ");
        scanf("%d",&num);
        if(num%2!=0) {
            break;
        }
    } while(num%2==0);
    printf("Thank You!!");
}