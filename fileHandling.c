#include <stdio.h>

int main()
{
    FILE *f = fopen("test.txt", "r");

    char line[100];
    if (f == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(f, "Hello, Kumail!\n");
    while (fgets(line, sizeof(line), f))
    {
        printf("%s", line);
    }
    fclose(f);
    return 0;
}
