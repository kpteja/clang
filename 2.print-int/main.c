#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number); // Reads and stores input from stdin.
    printf("You entered: %d", number);

    return 0;
}