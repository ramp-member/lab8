#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

    void sum() {
        int m, n, s = 0, k = 0;

        printf("Введите m и n: ");
        scanf("%d %d", &m, &n);

        if (m < n) {
            for (int i = m; i <= n; i++) {
                s += i;
                printf("Выполнено %d раз\n", ++k);
            }
        }
        else {
            for (int i = m; i >= n; i--) {
                s += i;
                printf("Выполнено %d раз\n", ++k);
            }
        }

        printf("Результат: %d\n", s);
    }

    int main() {
        setlocale(LC_CTYPE, "RUS");
        sum();
        return 0;
    }