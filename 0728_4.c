#include <stdio.h>

void swap(int arg1, int arg2)
{
    int tmp = arg1;
    arg1 = arg2;
    arg2 = tmp;

    printf("swap function in : %d %d\n", arg1, arg2);
}

int main(void)
{
    int num1 = 1;
    int num2 = 2;

    printf("main function in : %d %d\n", num1, num2);
    swap(num1, num2);
    printf("swap function after main function : %d %d\n", num1, num2);
    return 0;
}

