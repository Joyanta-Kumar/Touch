#include <stdio.h>


FILE* createFile(char* fileName) {
    FILE* file = fopen(fileName, "w");
    fclose(file);
}


int main(int argc, char *argv[]) {

    for (int index = 1; index < argc; index++) {
        createFile(argv[index]);
    }

    return 0;
}
