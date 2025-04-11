#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main() {

    system("chcp 1251");

    int ShowMenu = 1;
    int choice;
    while (1) {
        if (ShowMenu == 1) {
            printf("\nМеню:\n");
            printf("1. Перевести метри у сантиметри і міліметри\n");
            printf("2. Обчислити площу кола за радіусом\n");
            printf("3. Перетворити секунди у години, хвилини і секунди\n");
            printf("4. Перевірити, чи число парне\n");
            printf("5. Перетворити малу англійську літеру на велику\n");
            printf("6. Творче з\n");
            printf("-1. Вимкнути показ меню\n");
            printf("0. Вийти\n");
        }
        printf("Ваш вибір: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            float meters;
            printf("Введіть довжину в метрах: ");
            scanf("%f", &meters);
            printf("Сантиметри: %.2f см\n", meters * 100);
            printf("Міліметри: %.2f мм\n", meters * 1000);
            break;
        }
        case 2: {
            float radius;
            printf("Введіть радіус кола: ");
            scanf("%f", &radius);
            float area = 3.14159265f * radius * radius;
            printf("Площа кола: %.2f\n", area);
            break;
        }
        case 3: {
            int totalSeconds;
            printf("Введіть кількість секунд: ");
            scanf("%d", &totalSeconds);
            int hours = totalSeconds / 3600;
            int minutes = (totalSeconds % 3600) / 60;
            int seconds = totalSeconds % 60;
            printf("Години: %d, Хвилини: %d, Секунди: %d\n", hours, minutes, seconds);
            break;
        }
        case 4: {
            int number;
            printf("Введіть ціле число: ");
            scanf("%d", &number);
            if (number % 2 == 0)
                printf("Число парне.\n");
            else
                printf("Число непарне.\n");
            break;
        }
        case 5: {
            char ch;
            printf("Введіть малу англійську літеру: ");
            scanf(" %c", &ch);
            if (ch >= 'a' && ch <= 'z')
                printf("Велика літера: %c\n", ch - 32);
            else
                printf("Це не мала англійська літера.\n");
            break;
        }
        case 6: {                       // творче завдання 1 і 2
            int num;
            char ch;

            printf("Введіть число: ");
            scanf("%d", &num);                          
            printf("Введіть символ: ");
            scanf("%c", &ch);                       // тут виникне помимлка вводу

            printf("Ви ввели символ: '%c'\n", ch);

            printf("Введіть число: ");
            scanf("%d", &num);
            printf("Введіть символ: ");
            scanf(" %c", &ch);                      // а тут все працює правильно

            printf("Ви ввели символ: '%c'\n", ch);
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
