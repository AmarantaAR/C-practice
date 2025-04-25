#include <stdio.h>

int main(){

    int yo = 0;
    float yos = 0;

    printf("Initial age: %d. \n", yo);

    printf("What's your age?\n");

    scanf("%d %f", &yo, &yos);

    printf("great!, you are %d. %f \t years old", yo, yos);
}