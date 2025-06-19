#include <stdio.h>

int main() {
    FILE *f = fopen("test.txt", "w");
    if (f == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(f, "Hello, Kumail!\n");
    fclose(f);
    return 0;
}
