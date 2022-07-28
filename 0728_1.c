#include <stdio.h>

int Square(int,int);

int main()
{
    int num, Level; //num은 숫자 Level이 승수 
    int ret;
    printf("C 프로그래밍에서의 포인터 사용 예제\n");

    Level = 2;
    num = 3;
    ret = Square(Level , num);
    printf("Level : %d Return Value : %d\n", Level, ret);
    printf("\n");
    Level = 3;
    num = 4;
    ret = Square(Level, num);
    printf("Level : %d Return Value : %d\n", Level, ret);

}

int Square(int lv, int num)
{
    if(lv == 2)
        return num * num;
    else if(lv == 3)
        return num * num * num;
    else
        return 0;
}  