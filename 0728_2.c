#include <stdio.h>

void Square (int, int *);

int main()
{
    int num, Level;

    printf("C 프로그래밍에서의 포인터 사용 예제 - 두 번째 -\n");

    Level = 2;
    num = 3;
    printf("========== main function ==========\n");
    printf("&num = %d, num = %d\n", &num, num);
    printf("&Level = %d, Level = %d\n", &Level, Level);

    Square(Level, &num);

    printf("========== main function ==========\n");
    printf("&num = %d, num = %d\n", &num, num);
    printf("&Level = %d, Level = %d\n", &Level, Level);
    printf("Level : %d Return Value : %d\n", Level, num);
    printf("\n");
    Level = 3;
    num = 4;
    Square(Level, &num);
    printf("Level : %d Return Value : %d\n", Level, num);
}

void Square(int lv, int *ret)
{
    if(lv == 2)
        *ret = *ret * *ret;
    else if( lv == 3)
        *ret = *ret * *ret * *ret;
}