#include <stdio.h>

struct Student{
    int age;
    char name[30];
};

int main(){
   FILE *file = fopen("pramod.txt", "r");

   char word[50];
   
    while(fscanf(file, "%s", word) != EOF){
        printf("%s\n", word);
    }


   fclose(file);
    return 0;
}