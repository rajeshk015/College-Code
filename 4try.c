#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age: ");
    scanf("%d",&age);
    //age>=18 ? printf("Adult") : (age>13 && age<18 ? printf("Teenager") : printf("Child"));
    printf("%s",(age>=18 ? "Adult" : (age>13 && age<18 ? "Teenager" : "Child")));
}