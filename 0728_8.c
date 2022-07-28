#include <stdio.h>

int main()
{
    int i;
    char buf[5] = { 'a', 'b', 'c', 'd', 'e'};
    char *str = "abcde";

    printf("&buf = %d, buf = %d\n", &buf, buf);
    printf("&buf[0] = %d, buf[0] = %c\n", &buf[0], buf[0]);
    printf("&buf[1] = %d, buf[1] = %c\n", &buf[1], buf[1]);
    printf("&buf[2] = %d, buf[2] = %c\n", &buf[2], buf[2]);
    printf("&buf[3] = %d, buf[3] = %c\n", &buf[3], buf[3]);
    printf("&buf[4] = %d, buf[4] = %c\n", &buf[4], buf[4]);

    printf("\n\n");

    printf("&str = %d, str = %d, *str = %c\n", &str, str, *str);
    str = str + 1;
    printf("&str = %d, str = %d, *str = %c\n", &str, str, *str);
     str = str + 1;
    printf("&str = %d, str = %d, *str = %c\n", &str, str, *str);
     str = str + 1;
    printf("&str = %d, str = %d, *str = %c\n", &str, str, *str);
     str = str + 1;
    printf("&str = %d, str = %d, *str = %c\n", &str, str, *str);


}