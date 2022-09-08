#include<stdio.h>
int main()
{
    int num1, num2, count=0;
    printf("Enter the range: ");
    scanf("%d%d", &num1, &num2);
    for(int i=num1; i<=num2; i++) {
        for (int j=2; j<i; j++) {
            if(i%j==0) {
                break;
            }
            if(j+1==i) {
                count+=1;
                printf("%d ",i);
            }
        }
    }
    printf("\nThere are %d prime numbers",count);
}