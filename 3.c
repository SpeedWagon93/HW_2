#include<stdio.h>
#include <math.h>
int main()
{
    int n;
    int m;
    int x;

    printf("Введите числитель: ");
    scanf("%d", &n);
    printf("Введите знаменатель: ");
    scanf("%d", &m);

    if (n/m < 1)
    printf("0\n");
    else
    {
        x = n/m;
        x = x%10;
        printf("%d\n", x);
    }
}