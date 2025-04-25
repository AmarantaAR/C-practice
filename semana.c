#include <stdio.h>

int main()
{
    int day;
    printf("inssert a number between 1 and 7\n");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Domingo.\n");
        break;
    case 2:
        printf("Segunda-feira.\n");
        break;
    case 3:
        printf("Terca-feira.\n");
        break;
    case 4:
        printf("Quarta-feira.\n");
        break;
    case 5:
        printf("Quinta-feira.\n");
        break;
    case 6:
        printf("Sexta-feira.\n");
        break;
    case 7:
        printf("Sabado.\n");
        break;
    
    default:
        printf("Invalid number.\n");
        break;
    }
}
