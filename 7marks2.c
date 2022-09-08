#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks (1-100): ");
    scanf("%d",&marks);
    //(marks>=0 && marks<30) ? printf("C") : ((marks>=30 && marks<70) ? printf("B") : ((marks>=70 && marks<90) ? printf("A") : (marks>=90 && marks<=100) ? printf("A+") : printf("Wrong Marks")));
    if(marks>=0 && marks<30)
        printf("C");
    else if (marks>=30 && marks<70)
        printf("B");
    else if (marks>=70 && marks<90)
        printf("A");
    else if (marks>=90 && marks<=100)
        printf("A+");
    else
        printf("Wrong Marks");   
}