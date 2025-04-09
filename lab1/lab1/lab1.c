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
            printf("1. Поділити два цілих числа 5 та 2 і вивести результат як float\n");
            printf("2. Оголосити константну змінну типу float та присвоїти їй значення 3.14\n");
            printf("3. Оголосити змінну типу char та вивести її ASCII-код\n");
            printf("4. Ввести ціле і дробове число та вивести їх суму\n");
            printf("5. Зчитати символ і вивести наступний символ у таблиці ASCII\n");
            printf("6. Творче завдання 1\n");
            printf("7. Творче завдання 2\n");
            printf("-1. Вимкнути/увімкнути показ меню\n");
            printf("0. Вийти\n");
        }

        printf("Оберіть номер завдання: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            int a = 5, b = 2;
            float result = (float)a / b;
            printf("Результат: %.2f\n", result);
            break;
        }

        case 2: {
            const float pi = 3.14f;
            printf("Константа: %.2f\n", pi);
            break;
        }

        case 3: {
            char ch = 'A'; // або можна зчитувати від користувача
            printf("Символ: %c, ASCII-код: %d\n", ch, ch);
            break;
        }

        case 4: {
            int intVal;
            float floatVal;
            printf("Введіть ціле число: ");
            scanf("%d", &intVal);
            printf("Введіть дробове число: ");
            scanf("%f", &floatVal);
            float sum = intVal + floatVal;
            printf("Сума: %.2f\n", sum);
            break;
        }

        case 5: {
            char inputChar;
            printf("Введіть символ: ");
            scanf(" %c", &inputChar);
            char nextChar = inputChar + 1;
            printf("Наступний символ: %c\n", nextChar);
            break;
        }

        case 6: {                               // Творче завдання 1
            char c = 'A';
            printf("%d\n", c + 1);
            break;
        }


        case 7: {                               // Творче завдання 2
            unsigned int num;
            printf("Введіть невід'ємне ціле число: ");
            scanf("%u", &num);

            unsigned int multiplied = num << 1;  
            unsigned int divided = num >> 1;     

            printf("Результат множення на 2 (зсув вліво): %u\n", multiplied);
            printf("Результат ділення на 2 (зсув вправо): %u\n", divided);
            break;
        }


        case -1:
            ShowMenu = !ShowMenu;
            break;

        case 0:
            printf("Вихід з програми.\n");
            break;

        default:
            printf("Невірний вибір. Спробуйте ще раз.\n");
        }
    

    } while (choice != 0);

    return 0;
}
