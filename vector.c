#include <stdio.h>

int main()
{
    int v[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Insert a numer:\n");
        scanf("%d", &v[i]);
    }

    printf("Insserted!:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", v[i]);

    }
    
}
