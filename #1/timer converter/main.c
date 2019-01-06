#include <stdio.h>
#include <stdlib.h>

void cal(int second) {

    int hour = (second/3600);
    int minute = ((second%3600)/60);
    int sec = (second%3600) % 60;

    printf("It's %d hours %d minutes %d seconds.", hour, minute, sec);

}

int main()
{
    int second;
    printf("SECOND: ");
    scanf("%d", &second);

    cal(second);

    return 0;
}
