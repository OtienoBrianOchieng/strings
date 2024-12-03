#include <stdio.h>
#include <string.h>

int main () {

    char name[] = "Brian";
    printf("%s", name);

    char brother[200];
    printf("\nWho is your brother? ");
    fgets(brother, sizeof(brother), stdin);
    printf("\n%s", brother);

    char status[] = "single";
    status[0] = 'S';
    status[1] = 'A';
    printf("\n%s", status);

    printf("\nlength: %zu", strlen(status));



    return 0;
}