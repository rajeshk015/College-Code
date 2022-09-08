#include <Stdio.h>
void printHello();
void printGoodBye();
int main()
{
    printHello();
    printGoodBye();
    printHello();
    printGoodBye();
}

void printHello() {
    printf("Hello\n");
}

void printGoodBye() {
    printf("Good Bye\n");
}