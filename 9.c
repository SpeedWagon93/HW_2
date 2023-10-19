#include<stdio.h>
int main()
{
    int x;

    printf("Введите двузначное число: ");
    scanf("%d", &x);

    if( x < 9 || x > 99)
    {
        printf("Вы ввели не двузначное число\n");
    } else
    {
        printf("%d побайтовый сдвиг влево\n", x<<1);
        printf("%d побайтовый сдвиг вправо\n", x>>1);
    }
    return 0;
}