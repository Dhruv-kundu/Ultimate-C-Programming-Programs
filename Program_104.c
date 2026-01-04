// Program 104 :Write a program to define and use an enumeration.
#include <stdio.h>

enum days {MON, TUE, WED, THU, FRI};

int main() {
    enum days d = WED;
    printf("Day value: %d", d);
    return 0;
}
