#include <stdio.h>
int main()
{
    int num;
    do {
        printf("Enter numbers: ");
        scanf("%d",&num);
        if(num%7==0) {
            break;
        }
    } while(num%7!=0);
    printf("Thank You!!");
}