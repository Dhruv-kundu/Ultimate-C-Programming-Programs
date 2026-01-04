// Program 83: Write a program to count the number of lines in a file.

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0;

    fp = fopen("data.txt", "r");

    while((ch = fgetc(fp)) != EOF) {
        if(ch == '\n')
            lines++;
    }

    fclose(fp);
    printf("Number of lines = %d", lines + 1);

    return 0;
}
