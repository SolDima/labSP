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
            printf("1. ������� \"Hello\"\n");
            printf("2. ������� ����� int = 10\n");
            printf("3. ������� float 3.14 � ����� ������� ���� ����\n");
            printf("4. ������ 5 � 7\n");
            printf("5. ������� \"Hello\" � \"World\" � ����������\n");
            printf("6. ������� float � ������� 8 � 3 ������� ���� ����\n");
            printf("7. ������ 3.5 � 2.7\n");
            printf("8. ����������� ������ -> ���������\n");
            printf("9. ��������� ������� �����\n");
            printf("10. �������� ��� �����\n");
            printf("-1. �������� ����� ����\n");
            printf("0. �����\n");
        }
        printf("������ ����� ��������: ");
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
            printf("������ ����������� � �������: ");
            scanf("%f", &celsius);
            float fahrenheit = celsius * 9 / 5 + 32;
            printf("����������� � �����������: %.2f\n", fahrenheit);
            break;
        }

        case 9: {
            int num;
            printf("������ �����: ");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("�����\n");
            else
                printf("�������\n");
            break;
        }

        case 10: {
            int n1, n2;
            printf("������ ��� �����: ");
            scanf("%d %d", &n1, &n2);
            if (n1 > n2)
                printf("������ �����: %d\n", n1);
            else if (n2 > n1)
                printf("������ �����: %d\n", n2);
            else
                printf("����� ���\n");
            break;
        }

        case 0:
            printf("����� � ��������.\n");
            break;

        case -1:
            ShowMenu = !ShowMenu;
            break;

        default:
            printf("������� ����. ��������� �� ���.\n");
        }
    } while (choice != 0);

    return 0;
}
