#include<stdio.h>
#include <math.h>
//#include<stdlib.h>

int main()
{
    char ch[8];
    char buffer[8];
    printf("Введите число в двоичной системе исчисления\n");
    scanf("%s", ch);
    
    int l = 0;
    
    for (int i = 0; i < 8; i++)
    {
        if (ch[i] != '0' && ch[i] != '1')
        {
            l = i;
            break;
        }
        else
        {
            buffer[i] = ch[i];
        }
    }
    
    for (int i = 0; i < 8; i++)
    {
        ch[i] = '0';
    }
        
    
    for (int i = 0; i < l; i++)
    {
        ch[8 - l + i] = buffer[i];
    }
    
    int Num = 0;
    for (int i = 8; i >= 0; i--)
    {
        if (ch[i] == '1')
        {
            Num += pow(2, 7 - i);
        }
    }
    
    printf("%d\n", Num);
}