#include <stdio.h>

void Square (int, int *);

int main()
{
    int num, level;
    printf(" C program point ex\n");

    printf("input number : \n");
    scanf("%d", &num);
    printf("multiple number : \n");
    scanf("%d", &level);

    Square(level, &num);
    printf("level : %d Return Value : %d\n", level, num);
    printf("\n");
}
void Square(int level, int *num)
{
    int i, s_num;
    s_num = *num;

    for(i=2; i<=level; i++)
        *num = *num * s_num;
}