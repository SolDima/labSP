#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


int main() {

    system("chcp 1251");

    int ShowMenu = 1;
    int choice;
    while (1) {
        if (ShowMenu == 1) {
            printf("\n����:\n");
            printf("1. ��������� ����� � ���������� � �������\n");
            printf("2. ��������� ����� ���� �� �������\n");
            printf("3. ����������� ������� � ������, ������� � �������\n");
            printf("4. ���������, �� ����� �����\n");
            printf("5. ����������� ���� ��������� ����� �� ������\n");
            printf("6. ������ �\n");
            printf("-1. �������� ����� ����\n");
            printf("0. �����\n");
        }
        printf("��� ����: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            float meters;
            printf("������ ������� � ������: ");
            scanf("%f", &meters);
            printf("����������: %.2f ��\n", meters * 100);
            printf("̳������: %.2f ��\n", meters * 1000);
            break;
        }
        case 2: {
            float radius;
            printf("������ ����� ����: ");
            scanf("%f", &radius);
            float area = 3.14159265f * radius * radius;
            printf("����� ����: %.2f\n", area);
            break;
        }
        case 3: {
            int totalSeconds;
            printf("������ ������� ������: ");
            scanf("%d", &totalSeconds);
            int hours = totalSeconds / 3600;
            int minutes = (totalSeconds % 3600) / 60;
            int seconds = totalSeconds % 60;
            printf("������: %d, �������: %d, �������: %d\n", hours, minutes, seconds);
            break;
        }
        case 4: {
            int number;
            printf("������ ���� �����: ");
            scanf("%d", &number);
            if (number % 2 == 0)
                printf("����� �����.\n");
            else
                printf("����� �������.\n");
            break;
        }
        case 5: {
            char ch;
            printf("������ ���� ��������� �����: ");
            scanf(" %c", &ch);
            if (ch >= 'a' && ch <= 'z')
                printf("������ �����: %c\n", ch - 32);
            else
                printf("�� �� ���� ��������� �����.\n");
            break;
        }
        case 6: {                       // ������ �������� 1 � 2
            int num;
            char ch;

            printf("������ �����: ");
            scanf("%d", &num);                          
            printf("������ ������: ");
            scanf("%c", &ch);                       // ��� ������� �������� �����

            printf("�� ����� ������: '%c'\n", ch);

            printf("������ �����: ");
            scanf("%d", &num);
            printf("������ ������: ");
            scanf(" %c", &ch);                      // � ��� ��� ������ ���������

            printf("�� ����� ������: '%c'\n", ch);
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
