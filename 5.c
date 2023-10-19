#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Введите 1-ю переменную: ");
    scanf("%d", &a);
    printf("Введите 2-ю переменную: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("1-я переменная: %d\n", a);
    printf("2-я переменная: %d\n", b);
    return 0;
}