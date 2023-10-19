#include<stdio.h>

int main()
{
    int x;
    int h = 0;
    int m = 0;

    printf("Введите количество секунд: ");
    scanf("%d", &x);

    h = x/3600;
    m = (x - h*3600)/60;
    x = x - h*3600 - m*60;
    printf("%02d:%02d:%02d\n", h, m, x);
    return 0;
}