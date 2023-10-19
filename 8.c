#include<stdio.h>
int main()
{
    int x;

    printf("Введите трёхзначное число: ");
    scanf("%d", &x);

    if( x < 99 || x > 999)
    {
        printf("Вы ввели не трёхзначное число\n");
    } else
    {
        printf("%d\n", x/10);
    }
    return 0;
}