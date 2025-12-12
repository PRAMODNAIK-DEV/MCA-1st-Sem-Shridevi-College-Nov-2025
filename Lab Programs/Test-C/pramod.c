#include <stdio.h>

struct Student{
    int age;
    int rollNum;
};

int main()
{
    FILE* file = fopen("pramod.txt", "r");

    char line[50];
    if(file == NULL){
        printf("Failed to Open");
        return 0;
    }

    while(fgets(line, sizeof(line), file) != NULL){
printf("%s", line);
    }


    fclose(file);

    return 0;
}
