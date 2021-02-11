#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // puts
    char string[40];
    strcpy(string, "Hello how are you");
    puts(string);

    // fputs
    FILE *fp = NULL;
    fp = fopen("somefile.txt", "w");

    if (fp == NULL) {
        exit(1);
    }

    fputs("Hello there, this is test", fp);
    // close the file
    fclose(fp);

    return 0;
}