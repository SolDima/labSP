#define _CRT_SECURE_NO_WARNINGS // ��� Visual Studio �� ������� �� scanf
#include <stdio.h>
#include <stdlib.h>


int main() {

    system("chcp 1251 > nul");

    char choice = -1;

    printf("�����! \n³��� � ��� ���� ��� \"�������� ������!\"\n");
    
    do
    {
        printf("\n--- ���� ---\n");
        printf("\n����� 1 ��� ��������� ���");
        printf("\n����� 0 ��� �����\n");

        (void)scanf(" %c", &choice);

        switch (choice) {

            case '1':
                {
                char Fieldrow = 3;
                
                char** field = (char**)malloc(Fieldrow * sizeof(char*));
                for (int i = 0; i < Fieldrow; i++)
                {
                    field[i] = (char*)malloc(Fieldrow * sizeof(char));
                }


                for (int i = 0; i < Fieldrow; i++)
                {
                    for (int j = 0; j < Fieldrow; j++)
                    {
                        field[i][j] = ' ';
                    }
                }

                char hidRow = 2;
                char hidCol = 9;
                int** hid = (int**)calloc(hidRow, sizeof(int*));
                for(int i = 0; i < hidCol; i++)
                {
                    hid[i] = (int*)calloc(hidCol, sizeof(int));
                }


                int hidnum = 0;
                int peremoga = 0;

                printf("�������� ������, ������ ���� �� �������.\n");
                printf("��� ������ ������� ��� ����, ����� �� ����������.\n");

                printf(" ճ� %d  \n", hidnum);
                printf("    1      2      3  \n");
                printf("1 | %c |  | %c |  | %c |\n", field[0][0], field[0][1], field[0][2]);
                printf("2 | %c |  | %c |  | %c |\n", field[1][0], field[1][1], field[1][2]);
                printf("3 | %c |  | %c |  | %c |\n", field[2][0], field[2][1], field[2][2]);

                do
                {
                hidnow:

                    if (hidnum % 2 == 0)
                        printf("����� ������ �\n");
                    else
                        printf("����� ������ �\n");

                    (void)scanf(" %d %d", &hid[0][hidnum], &hid[1][hidnum]);

                    if (hid[0][hidnum] != 1 && hid[0][hidnum] != 2 && hid[0][hidnum] != 3 ||
                        hid[1][hidnum] != 1 && hid[1][hidnum] != 2 && hid[1][hidnum] != 3)
                    {
                        printf("������� �����.\n");
                        goto hidnow;
                    }

                    hid[0][hidnum]--;
                    hid[1][hidnum]--;

                    for (int i = 1; i <= hidnum; i++)
                    {

                        if (hid[0][hidnum] == hid[0][i - 1] && hid[1][hidnum] == hid[1][i - 1])
                        {
                            printf("��, ��� ��� ����� �����. ����� ���� �������\n");
                            goto hidnow;
                        }

                    }



                    if (hidnum % 2 == 0)
                        field[hid[0][hidnum]][hid[1][hidnum]] = 'X';
                    else
                        field[hid[0][hidnum]][hid[1][hidnum]] = 'O';

                    printf(" ճ� %d  \n", hidnum);
                    printf("    1      2      3  \n");
                    printf("1 | %c |  | %c |  | %c |\n", field[0][0], field[0][1], field[0][2]);
                    printf("2 | %c |  | %c |  | %c |\n", field[1][0], field[1][1], field[1][2]);
                    printf("3 | %c |  | %c |  | %c |\n", field[2][0], field[2][1], field[2][2]);

                    // �������� ��������

                    if (hidnum >= 4)
                    {

                        for (int i = 0; i < 3; i++)
                        {
                            if (field[i][0] == field[i][1] &&
                                field[i][0] == field[i][2] &&
                                field[i][0] != ' ')
                            {
                                printf("ʳ���� ���! ������ %c \n", field[i][0]);
                                peremoga += 1;
                            }

                            if (field[0][i] == field[1][i] &&
                                field[0][i] == field[2][i] &&
                                field[0][i] != ' ')
                            {
                                printf("ʳ���� ���! ������ %c \n", field[0][i]);
                                peremoga += 1;
                            }
                        }


                            if ((field[0][0] == field[1][1] &&
                                field[0][0] == field[2][2] &&
                                field[0][0] != ' ')
                                ||
                                (field[0][2] == field[1][1] &&
                                    field[0][2] == field[2][0] &&
                                    field[0][2] != ' '))
                            {
                                printf("ʳ���� ���! ������ %c \n", field[1][1]);
                                peremoga += 1;
                            }                        
                    }
                    if (peremoga == 1) 
                    {
                        for (int i = 0; i < 3; i++) 
                        {
                            for (int j = 0; j < 3; j++)
                            {
                                field[i][j] = ' ';
                            }
                        }

                        printf("ճ� ���:\n");

                        for (int i = 0; i <= hidnum; i++)
                        {

                            if (i % 2 == 0)
                                field[hid[0][i]][hid[1][i]] = 'X';
                            else
                                field[hid[0][i]][hid[1][i]] = 'O';

                            printf("1 | %c |  | %c |  | %c |\n", field[0][0], field[0][1], field[0][2]);
                            printf("2 | %c |  | %c |  | %c |\n", field[1][0], field[1][1], field[1][2]);
                            printf("3 | %c |  | %c |  | %c |\n\n", field[2][0], field[2][1], field[2][2]); 
                        }
                    }

                    hidnum++;
                    if (hidnum == 9)
                        printf("��������� ������!");

                } while (hidnum != 9 && peremoga == 0);

                break;
                } 

            case '0':


                return 0;
                break;
            }
    }while (choice != '0');

    
    return 0;
}
