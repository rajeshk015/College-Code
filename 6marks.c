#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    /*if(marks>=0 && marks<33)
    {
        printf("FAIL");
    }
    else if (marks>=33 && marks<=100) {
        printf("PASS");
    }
    else
    {
        printf("Wrong Marks");
    }*/
    printf("%s",((marks>=0 && marks<33) ? "FAIL" : ((marks>=33 && marks <=100) ? "PASS" : "Wrong Marks")));
}