#include <stdio.h>
#include <stdlib.h>

void header() {
    for (int i = 0; i < 20; i++) {
        printf("#");
    }
    printf("\n");
}

void footer() {
    for (int i = 0; i < 20; i++) {
        printf("*");
    }
    printf("\n");

}

int main()
{
    header();
    printf("@@ C PROGRAMMING @@\n");
    printf("WELCOME TO C LANGUAGE\n");
    footer();
    return 0;
}
