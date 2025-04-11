#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    system("chcp 1251");

    int ShowMenu = 1;
    int choice;
    while (1) {
        if (ShowMenu == 1) {
            printf("\nМеню:\n");
            printf("1. Поміняти два числа місцями без третьої змінної\n");
            printf("2. Обчислити вартість покупки\n");
            printf("3. Вивести останню цифру цілого числа\n");
            printf("4. Обчислити середню швидкість\n");
            printf("5. Вивести тризначне число у зворотному порядку\n");
            printf("6. Творче завдання 1\n");
            printf("7. Творче завдання 2\n");
            printf("0. Вийти\n");
            printf("-1. Вимкнути показ меню\n");
        }
        printf("Ваш вибір: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            int a, b;
            printf("Введіть два числа: ");
            scanf("%d %d", &a, &b);
            a = a + b;
            b = a - b;
            a = a - b;
            printf("Після обміну: a = %d, b = %d\n", a, b);
            break;
        }
        case 2: {
            int quantity;
            float price, total;
            printf("Введіть кількість товарів: ");
            scanf("%d", &quantity);
            printf("Введіть ціну за одиницю: ");
            scanf("%f", &price);
            total = quantity * price;
            printf("Загальна вартість: %.2f\n", total);
            break;
        }
        case 3: {
            int number;
            printf("Введіть ціле число: ");
            scanf("%d", &number);
            int lastDigit = number % 10;
            if (lastDigit < 0) lastDigit = -lastDigit;
            printf("Остання цифра: %d\n", lastDigit);
            break;
        }
        case 4: {
            float distance1 = 120.0, time1 = 2.0;
            float distance2 = 80.0, time2 = 1.0;
            float avgSpeed = (distance1 + distance2) / (time1 + time2);
            printf("Середня швидкість: %.2f км/год\n", avgSpeed);
            break;
        }
        case 5: {
            int num;
            printf("Введіть тризначне число: ");
            scanf("%d", &num);
            int rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
            printf("У зворотному порядку: %d\n", rev);
            break;
        }
        case 6: {
            int number = -247;
            int lastDigit = number % 10;
            if (lastDigit < 0) lastDigit = -lastDigit;
            printf("%d\n", lastDigit);
            break;
        }
        case 7: {
            printf(" 7 %%  3 = %d\n", 7 % 3);
            printf("-7 %%  3 = %d\n", -7 % 3);
            printf(" 7 %% -3 = %d\n", 7 % -3);
            printf("-7 %% -3 = %d\n", -7 % -3);
            break;
        }
        
        case -1: {
            ShowMenu = !ShowMenu;
            break;
        }
        case 0:
            return 0;
        default:
            printf("Невірний вибір. Спробуйте ще раз.\n");
        }
    }
}
