#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc < 2) {
        printf("wzip: file1 [file2 ...]\n");
        exit(1);
    }

    int count = 0;
    char prev, curr;

    int first = 1;

    for (int i = 1; i < argc; i++) {

        FILE *fp = fopen(argv[i], "r");

        if (fp == NULL) {
            printf("wzip: cannot open file\n");
            exit(1);
        }

        while ((curr = fgetc(fp)) != EOF) {

            if (first) {
                prev = curr;
                count = 1;
                first = 0;
            }
            else if (curr == prev) {
                count++;
            }
            else {
                fwrite(&count, sizeof(int), 1, stdout);
                fwrite(&prev, sizeof(char), 1, stdout);

                prev = curr;
                count = 1;
            }
        }

        fclose(fp);
    }

    if (!first) {
        fwrite(&count, sizeof(int), 1, stdout);
        fwrite(&prev, sizeof(char), 1, stdout);
    }

    return 0;
}
