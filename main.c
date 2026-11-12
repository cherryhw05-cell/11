// 11주차 프로그래밍 실습

// 실습05
#include <stdio.h>

int main(void)
{
    char *pc; // 1byte
    int *pi; // 4byte
    double *pd; // 8byte

    pc = (char*)10000;
    pi = (int*)10000;
    pd = (double*)10000;

    printf("증가 전 : pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

    pc++;
    pi++;
    pd++;

    printf("증가 후 : pc = %d, pi = %d, pd = %d\n", pc, pi, pd);

    return 0;
}