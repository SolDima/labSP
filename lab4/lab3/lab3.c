#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#define FORMAT_OUTPUT "���������: %-20s = %d\n"

int main() {
    system("chcp 1251 > nul");

    int choice;
    do {
        printf("������ ����� �������� (1-7, 8 ��� ������): ");
        scanf("%d", &choice);

        switch (choice) {
        case 1: {
            float price = 450.0;
            float discount = 0.15;
            int final_price = (int)(price * (1 - discount));
            printf("ʳ����� ���� ���� ������ 15%: %d\n", final_price);
            break;
        }
        case 2: { 
            int birth_year, age;
            printf("������ �� ����������: ");
            scanf("%d", &birth_year);
            age = 2025 - birth_year;
            printf("³�: %d\n", age);
            break;
        }
        case 3: { 
            float x1, y1, x2, y2;
            printf("������ ���������� ����� ����� (x1 y1): ");
            scanf("%f %f", &x1, &y1);
            printf("������ ���������� ����� ����� (x2 y2): ");
            scanf("%f %f", &x2, &y2);
            float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
            printf("³������: %.2f\n", distance);
            break;
        }
        case 4: { 
            float price, discount_percent;
            printf("������ ��������� ����: ");
            scanf("%f", &price);
            printf("������ ������� ������: ");
            scanf("%f", &discount_percent);
            float final_price = price * (1 - discount_percent / 100);
            printf("ʳ����� ����: %.2f\n", final_price);
            break;
        }
        case 5: {
            int number;
            printf("������ ��������� �����: ");
            scanf("%d", &number);
            if (number >= 100 && number <= 999) {
                int sum = (number / 100) + ((number / 10) % 10) + (number % 10);
                printf("���� ����: %d\n", sum);
            }
            else {
                printf("���� �����, ������ ��������� �����.\n");
            }
            break;
        }
        case 6: {                                           //������ �������� 1
            int a, b, sum;
            printf("������ ��� ����� �����: ");
            scanf("%d %d", &a, &b);
            sum = a + b;
            printf(FORMAT_OUTPUT, "���� �����", sum);
            break;
        }
        case 7: {                                           //������ �������� 2
            int rows, cols;
            printf("������ ������� ����� �� ��������: ");
            scanf("%d %d", &rows, &cols);

            int** array = (int**)calloc(rows, sizeof(int*));
            for (int i = 0; i < rows; i++) {
                array[i] = (int*)calloc(cols, sizeof(int));
            }

            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    printf("%d ", array[i][j]);
                }
                printf("\n");
            }

            for (int i = 0; i < rows; i++) {
                free(array[i]);
            }
            free(array);
            break;
        }
        case 8:
            printf("����� �� ��������.\n");
            break;
        default:
            printf("������� ����.\n");
        }
    } while (choice != 8);

    return 0;
}


