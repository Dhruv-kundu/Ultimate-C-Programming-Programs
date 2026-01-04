// Program 85: Write a program to copy contents of one file to another file.

#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("source.txt", "r");
    fp2 = fopen("dest.txt", "w");

    if(fp1 == NULL || fp2 == NULL) {
        printf("File error");
        return 0;
    }

    while((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully");
    return 0;
}
