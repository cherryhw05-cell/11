// 11주차 프로그래밍 실습

// 실습01
#include <stdio.h>

int main(void) {
    int i = 300;

    int *pi = &i;
    char *pc = (char*)&i;

    printf("%i, %i, %i\n", i, *pi, *pc);

    return 0;
}