#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    // Verificar que se haya pasado al menos un archivo
    if (argc < 2) {
        printf("wunzip: file1 [file2 ...]\n");
        exit(1);
    }

    // Recorrer todos los archivos recibidos
    for (int i = 1; i < argc; i++) {

        FILE *fp = fopen(argv[i], "rb");

        // Verificar si el archivo se abrió correctamente
        if (fp == NULL) {
            printf("wunzip: cannot open file\n");
            exit(1);
        }

        int count;
        char character;

        // Leer el archivo comprimido
        while (fread(&count, sizeof(int), 1, fp) == 1) {

            fread(&character, sizeof(char), 1, fp);

            // Imprimir el caracter repetido "count" veces
            for (int j = 0; j < count; j++) {
                printf("%c", character);
            }
        }

        fclose(fp);
    }

    return 0;
}
