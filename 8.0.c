#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
    void simvol() {
        int count;
        char symbol1, symbol2;

        printf("Введите количество символов: ");
        scanf("%d", &count);
        printf("Введите символ для первой половины: ");
        scanf(" %c", &symbol1);
        printf("Введите символ для второй половины: ");
        scanf(" %c", &symbol2);

        printf("+");

        for (int i = 1; i <= count; i++) {
            if (i <= count / 2)
                putchar(symbol1);
            else
                putchar(symbol2);

            putchar('!');
        }

        printf("+\n");
    }

    int main() {
        setlocale(LC_CTYPE, "RUS");
        simvol();
        return 0;
    }