// Program 135 : Write a C program that uses goto to exit from nested loops when a specific condition is met.
#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 3; j++) {
            if(i == 2 && j == 2)
                goto end;
            printf("%d %d\n", i, j);
        }
    }

end:
    printf("Exited nested loop using goto");
    return 0;
}
