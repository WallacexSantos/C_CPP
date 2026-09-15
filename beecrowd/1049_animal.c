#include <stdio.h>
#include <string.h>

int main()
{
    char palavra_1[20], palavra_2[20], palavra_3[20];

    scanf("%s %s %s", palavra_1,palavra_2,palavra_3);

    if (strcmp(palavra_1, "vertebrado") == 0) {
        if (strcmp(palavra_2, "ave") == 0) {
            if (strcmp(palavra_3, "carnivoro") == 0) {
                printf("aguia\n");
            }
            else {
                printf("pomba\n");
            }
        }
        else {
            if (strcmp(palavra_3, "onivoro") == 0) {
                printf("homem\n");
            }
            else {
                printf("vaca\n");
            }
        }
    }
    else {
        if (strcmp(palavra_2, "inseto") == 0) {
            if (strcmp(palavra_3, "hematofago") == 0) {
                printf("pulga\n");
            }
            else {
                printf("lagarta\n");
            }
        }
        else {
            if (strcmp(palavra_3, "hematofago") == 0) {
                printf("sanguessuga\n");
            }
            else {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}
