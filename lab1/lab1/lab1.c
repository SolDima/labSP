#define _CRT_SECURE_NO_WARNINGS // ��� Visual Studio �� ������� �� scanf
#include <stdio.h>
#include <stdlib.h>

int main() {

    system("chcp 1251");

    int choice;
    int ShowMenu = 1;

    do {
        if (ShowMenu == 1)
        {
            printf("\n���� �������:\n");
            printf("1. ������� ��� ����� ����� 5 �� 2 � ������� ��������� �� float\n");
            printf("2. ��������� ���������� ����� ���� float �� �������� �� �������� 3.14\n");
            printf("3. ��������� ����� ���� char �� ������� �� ASCII-���\n");
            printf("4. ������ ���� � ������� ����� �� ������� �� ����\n");
            printf("5. ������� ������ � ������� ��������� ������ � ������� ASCII\n");
            printf("6. ������ �������� 1\n");
            printf("7. ������ �������� 2\n");
            printf("-1. ��������/�������� ����� ����\n");
            printf("0. �����\n");
        }

        printf("������ ����� ��������: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            int a = 5, b = 2;
            float result = (float)a / b;
            printf("���������: %.2f\n", result);
            break;
        }

        case 2: {
            const float pi = 3.14f;
            printf("���������: %.2f\n", pi);
            break;
        }

        case 3: {
            char ch = 'A'; // ��� ����� ��������� �� �����������
            printf("������: %c, ASCII-���: %d\n", ch, ch);
            break;
        }

        case 4: {
            int intVal;
            float floatVal;
            printf("������ ���� �����: ");
            scanf("%d", &intVal);
            printf("������ ������� �����: ");
            scanf("%f", &floatVal);
            float sum = intVal + floatVal;
            printf("����: %.2f\n", sum);
            break;
        }

        case 5: {
            char inputChar;
            printf("������ ������: ");
            scanf(" %c", &inputChar);
            char nextChar = inputChar + 1;
            printf("��������� ������: %c\n", nextChar);
            break;
        }

        case 6: {                               // ������ �������� 1
            char c = 'A';
            printf("%d\n", c + 1);
            break;
        }


        case 7: {                               // ������ �������� 2
            unsigned int num;
            printf("������ ����'���� ���� �����: ");
            scanf("%u", &num);

            unsigned int multiplied = num << 1;  
            unsigned int divided = num >> 1;     

            printf("��������� �������� �� 2 (���� ����): %u\n", multiplied);
            printf("��������� ������ �� 2 (���� ������): %u\n", divided);
            break;
        }


        case -1:
            ShowMenu = !ShowMenu;
            break;

        case 0:
            printf("����� � ��������.\n");
            break;

        default:
            printf("������� ����. ��������� �� ���.\n");
        }
    

    } while (choice != 0);

    return 0;
}
