#include <stdio.h>

int main() {
    int hour1, minute1, hour2, minute2;
    scanf("%d:%d", &hour1, &minute1);
    scanf("%d:%d", &hour2, &minute2);
    int totalMinutes1 = hour1 * 60 + minute1;
    int totalMinutes2 = hour2 * 60 + minute2;
    int difference = totalMinutes2 - totalMinutes1;
    printf("Time difference: %d hour %d minute\n", difference / 60, difference % 60);
    return 0;
}
