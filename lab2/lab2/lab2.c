#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    system("chcp 1251");

    int ShowMenu = 1;
    int choice;
    while (1) {
        if (ShowMenu == 1) {
            printf("\n����:\n");
            printf("1. ������� ��� ����� ������ ��� ������ �����\n");
            printf("2. ��������� ������� �������\n");
            printf("3. ������� ������� ����� ������ �����\n");
            printf("4. ��������� ������� ��������\n");
            printf("5. ������� ��������� ����� � ���������� �������\n");
            printf("6. ������ �������� 1\n");
            printf("7. ������ �������� 2\n");
            printf("0. �����\n");
            printf("-1. �������� ����� ����\n");
        }
        printf("��� ����: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            int a, b;
            printf("������ ��� �����: ");
            scanf("%d %d", &a, &b);
            a = a + b;
            b = a - b;
            a = a - b;
            printf("ϳ��� �����: a = %d, b = %d\n", a, b);
            break;
        }
        case 2: {
            int quantity;
            float price, total;
            printf("������ ������� ������: ");
            scanf("%d", &quantity);
            printf("������ ���� �� �������: ");
            scanf("%f", &price);
            total = quantity * price;
            printf("�������� �������: %.2f\n", total);
            break;
        }
        case 3: {
            int number;
            printf("������ ���� �����: ");
            scanf("%d", &number);
            int lastDigit = number % 10;
            if (lastDigit < 0) lastDigit = -lastDigit;
            printf("������� �����: %d\n", lastDigit);
            break;
        }
        case 4: {
            float distance1 = 120.0, time1 = 2.0;
            float distance2 = 80.0, time2 = 1.0;
            float avgSpeed = (distance1 + distance2) / (time1 + time2);
            printf("������� ��������: %.2f ��/���\n", avgSpeed);
            break;
        }
        case 5: {
            int num;
            printf("������ ��������� �����: ");
            scanf("%d", &num);
            int rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
            printf("� ���������� �������: %d\n", rev);
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
            printf("������� ����. ��������� �� ���.\n");
        }
    }
}
