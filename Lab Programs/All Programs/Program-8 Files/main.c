#include <stdio.h>

int main()
{
    char source[100], target[100];
    FILE *src, *tgt;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", source);
    printf("Enter target file name: ");
    scanf("%s", target);

    src = fopen(source, "r");
    if (src == NULL)
    {
        printf("Error: Source file cannot be opened.\n");
        return 1;
    }

    tgt = fopen(target, "w");
    if (tgt == NULL)
    {
        printf("Error: Target file cannot be opened.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, tgt);
    }

    printf("File copied successfully.\n");
    fclose(src);
    fclose(tgt);
    return 0;
}
