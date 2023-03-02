//https://github.com/YaDmitryE/D.Z.2.6

#include <stdio.h>
#include <locale.h>

int main()


{
	setlocale(LC_ALL, "Russian");
    int d, m, y;
    printf("введите дату рождения \n");
    printf("день: ");
    scanf("%i",&d);
    printf("месяц: ");
    scanf("%i", &m);
    printf("год: ");
    scanf("%i", &y);
    if ((d <= 0) || (d>31) || (m <= 0
	) || (m > 12) || (y < 0)) {
        printf("неверный формат ввода");
    }
    else {
        printf("Ваша дата рождения: %i.%i.%i \n", d, m, y);
        int y1 = y % 4;
        if (y1 == 0) {
            printf("Вы родились в високосный год \n");
        }
        else {
            printf("Вы родились в невисокосный год \n");
        }
        int y2 = y % 12;
        printf("Согласно Восточному календарю, вы родились в год ");
        switch (y2) {
        case 0: {
            printf("обезьяны \n");
        }
              break;
        case 1: {
            printf("петуха \n");
        }
              break;
        case 2: {
            printf("собаки \n");
        }
              break;
        case 3: {
            printf("свиньи \n");
        }
              break;
        case 4: {
            printf("крысы \n");
        }
              break;
        case 5: {
            printf("быка \n");
        }
              break;
        case 6: {
            printf("тигра \n");
        }
              break;
        case 7: {
            printf("кролика \n");
        }
              break;
        case 8: {
            printf("дракона \n");
        }
              break;
        case 9: {
            printf("змеи \n");
        }
              break;
        case 10: {
            printf("лошади \n");
        }
               break;
        case 11: {
            printf("овцы \n");
        }
               break;
        default: {
            printf("ошибка");
            break;
        }
        }
        printf("Ваш знак зодиака ");
        if (((d >= 22) && (m == 12)) || ((d <= 20) && (m == 1))) {
            printf("козерог \n");
        }
        else {
            if (((d >= 21) && (m == 1)) || ((d <= 19) && (m == 2))) {
                printf("водолей \n");
            }
            else {
                if (((d >= 20) && (m == 2)) || ((d <= 20) && (m == 3))) {
                    printf("рыбы \n");
                }
                else {
                    if (((d >= 21) && (m == 3)) || ((d <= 20) && (m == 4))) {
                        printf("овен \n");
                    }
                    else {
                        if (((d >= 21) && (m == 4)) || ((d <= 21) && (m == 5))) {
                            printf("телец \n");
                        }
                        else {
                            if (((d >= 22) && (m == 5)) || ((d <= 21) && (m == 6))) {
                                printf("близнецы \n");
                            }
                            else {
                                if (((d >= 22) && (m == 6)) || ((d <= 22) && (m == 7))) {
                                    printf("рак \n");
                                }
                                else {
                                    if (((d >= 23) && (m == 7)) || ((d <= 21) && (m == 8))) {
                                        printf("лев \n");
                                    }
                                    else {
                                        if (((d >= 22) && (m == 8)) || ((d <= 23) && (m == 9))) {
                                            printf("дева \n");
                                        }
                                        else {
                                            if (((d >= 24) && (m == 9)) || ((d <= 23) && (m == 10))) {
                                                printf("весы \n");
                                            }
                                            else {
                                                if (((d >= 24) && (m == 10)) || ((d <= 22) && (m == 11))) {
                                                    printf("скорпион \n");
                                                }
                                                else {
                                                    if (((d >= 23) && (m == 11)) || ((d <= 22) && (m == 12))) {
                                                        printf("стрелец \n");
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
