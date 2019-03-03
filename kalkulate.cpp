//Andrii Chornyi 21:06 / 3.03.2019
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <locale>
#include <conio.h>
float a, b, c;
char d;
int p;
int main()
  
  {
//Kyrylo Kaibedov 21:15 / 3.03.2019
    while (p != 2)
    {
        printf("1 = calculator \n 2 - exit \n");
        scanf("%d", &p);
        switch (p)
        {
        case 1:
        {
            float c;
            printf("First number ");
            scanf("%d", &a);
            printf("Action with numbers ");
            scanf("%s", &d);
            printf("Second number ");
            scanf("%d", &b);
            if (d == '+')
                c = a + b;
            if (d == '-')
                c = a - b;
            if (d == '*')
                c = a * b;
            if (d == '/')
                c = a / b;
            system("cls");
        }
