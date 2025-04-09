#define _CRT_SECURE_NO_WARNINGS // Щоб Visual Studio не ругався на scanf
#include <stdio.h>
#include <stdlib.h>  



int main() {

    system("chcp 1251");


    int choice;
    int ShowMenu = 1;

    do {
        if (ShowMenu == 1)
        {
            printf("\nМеню завдань:\n");
            printf("1. Вивести \"Hello\"\n");
            printf("2. Вивести змінну int = 10\n");
            printf("3. Вивести float 3.14 з двома знаками після коми\n");
            printf("4. Додати 5 і 7\n");
            printf("5. Вивести \"Hello\" і \"World\" з табуляцією\n");
            printf("6. Вивести float з шириною 8 і 3 знаками після коми\n");
            printf("7. Додати 3.5 і 2.7\n");
            printf("8. Конвертація Цельсій -> Фаренгейт\n");
            printf("9. Перевірити парність числа\n");
            printf("10. Порівняти два числа\n");
            printf("-1. Вимкнути показ меню\n");
            printf("0. Вийти\n");
        }
        printf("Оберіть номер завдання: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Hello\n");
            break;

        case 2: {
            int x = 10;
            printf("%d\n", x);
            break;
        }

        case 3: {
            float pi = 3.14f;
            printf("%.2f\n", pi);
            break;
        }

        case 4: {
            int a = 5, b = 7;
            printf("%d\n", a + b);
            break;
        }

        case 5:
            printf("Hello\tWorld\n");
            break;

        case 6: {
            float number = 12.34567f;
            printf("%8.3f\n", number);
            break;
        }

        case 7: {
            float sum = 3.5f + 2.7f;
            printf("%f\n", sum);
            break;
        }

        case 8: {
            float celsius;
            printf("Введіть температуру в Цельсіях: ");
            scanf("%f", &celsius);
            float fahrenheit = celsius * 9 / 5 + 32;
            printf("Температура у Фаренгейтах: %.2f\n", fahrenheit);
            break;
        }

        case 9: {
            int num;
            printf("Введіть число: ");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("Парне\n");
            else
                printf("Непарне\n");
            break;
        }

        case 10: {
            int n1, n2;
            printf("Введіть два числа: ");
            scanf("%d %d", &n1, &n2);
            if (n1 > n2)
                printf("Більше число: %d\n", n1);
            else if (n2 > n1)
                printf("Більше число: %d\n", n2);
            else
                printf("Числа рівні\n");
            break;
        }

        case 0:
            printf("Вихід з програми.\n");
            break;

        case -1:
            ShowMenu = !ShowMenu;
            break;

        default:
            printf("Невірний вибір. Спробуйте ще раз.\n");
        }
    } while (choice != 0);

    return 0;
}
