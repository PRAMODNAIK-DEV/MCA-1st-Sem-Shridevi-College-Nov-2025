#include <stdio.h>

struct Student
{
    char name[50];
    int marks;
};

int main()
{
    struct Student students[100];
    int n;
    double avg = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", students[i].name, &students[i].marks);
        avg += students[i].marks;
    }
    avg /= n;

    printf("Average marks: %.2lf\n", avg);
    printf("Students scoring above average:\n");
    for (int i = 0; i < n; i++)
    {
        if (students[i].marks > avg)
        {
            printf("%s\n", students[i].name);
        }
    }

    printf("Students scoring below average:\n");
    for (int i = 0; i < n; i++)
    {
        if (students[i].marks < avg)
        {
            printf("%s\n", students[i].name);
        }
    }
    return 0;
}
