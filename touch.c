#include <stdio.h>
#include <stdbool.h>


FILE* createFile(char* fileName) {
    FILE* file;
    
    file = fopen(fileName, "r");
    if (file != NULL) {
        // File already exists.
        return NULL;
    }

    file = fopen(fileName, "w");

    if (file == NULL) {
        // Could not create file.
        return NULL;
    }
    fclose(file);
    
    return file;
}


int main(int argc, char *argv[]) {

    for (int index = 1; index < argc; index++) {
        createFile(argv[index]);
    }

    return 0;
}
