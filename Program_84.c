// Program 84: Write a program to count the number of characters in a file.

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("data.txt", "r");

    while((ch = fgetc(fp)) != EOF) {
        count++;
    }

    fclose(fp);
    printf("Number of characters = %d", count);

    return 0;
}
