//https://github.com/YaDmitryE/D.Z.2.6

#include <stdio.h>
#include <locale.h>
#include "utf8.h"

int main()


{
	setlocale(LC_ALL, "Russian");
    int d, m, y;
    printf("������� ���� �������� \n");
    printf("����: ");
    scanf("%i",&d);
    printf("�����: ");
    scanf("%i", &m);
    printf("���: ");
    scanf("%i", &y);
    if ((d <= 0) || (d>31) || (m <= 0
	) || (m > 12) || (y < 0)) {
        printf("�������� ������ �����");
    }
    else {
        printf("���� ���� ��������: %i.%i.%i \n", d, m, y);
        int y1 = y % 4;
        if (y1 == 0) {
            printf("�� �������� � ���������� ��� \n");
        }
        else {
            printf("�� �������� � ������������ ��� \n");
        }
        int y2 = y % 12;
        printf("�������� ���������� ���������, �� �������� � ��� ");
        switch (y2) {
        case 0: {
            printf("�������� \n");
        }
              break;
        case 1: {
            printf("������ \n");
        }
              break;
        case 2: {
            printf("������ \n");
        }
              break;
        case 3: {
            printf("������ \n");
        }
              break;
        case 4: {
            printf("����� \n");
        }
              break;
        case 5: {
            printf("���� \n");
        }
              break;
        case 6: {
            printf("����� \n");
        }
              break;
        case 7: {
            printf("������� \n");
        }
              break;
        case 8: {
            printf("������� \n");
        }
              break;
        case 9: {
            printf("���� \n");
        }
              break;
        case 10: {
            printf("������ \n");
        }
               break;
        case 11: {
            printf("���� \n");
        }
               break;
        default: {
            printf("������");
            break;
        }
        }
        printf("��� ���� ������� ");
        if (((d >= 22) && (m == 12)) || ((d <= 20) && (m == 1))) {
            printf("������� \n");
        }
        else { 
            if (((d >= 21) && (m == 1)) || ((d <= 19) && (m == 2))) {
                printf("������� \n");
            }
            else {
                if (((d >= 20) && (m == 2)) || ((d <= 20) && (m == 3))) {
                    printf("���� \n");
                }
                else {
                    if (((d >= 21) && (m == 3)) || ((d <= 20) && (m == 4))) {
                        printf("���� \n");
                    }
                    else {
                        if (((d >= 21) && (m == 4)) || ((d <= 21) && (m == 5))) {
                            printf("����� \n");
                        }
                        else {
                            if (((d >= 22) && (m == 5)) || ((d <= 21) && (m == 6))) {
                                printf("�������� \n");
                            }
                            else {
                                if (((d >= 22) && (m == 6)) || ((d <= 22) && (m == 7))) {
                                    printf("��� \n");
                                }
                                else {
                                    if (((d >= 23) && (m == 7)) || ((d <= 21) && (m == 8))) {
                                        printf("��� \n");
                                    }
                                    else {
                                        if (((d >= 22) && (m == 8)) || ((d <= 23) && (m == 9))) {
                                            printf("���� \n");
                                        }
                                        else {
                                            if (((d >= 24) && (m == 9)) || ((d <= 23) && (m == 10))) {
                                                printf("���� \n");
                                            }
                                            else {
                                                if (((d >= 24) && (m == 10)) || ((d <= 22) && (m == 11))) {
                                                    printf("�������� \n");
                                                }
                                                else {
                                                    if (((d >= 23) && (m == 11)) || ((d <= 22) && (m == 12))) {
                                                        printf("������� \n");
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
