#include <stdio.h>
#include <string.h>

#define SIZE 10

typedef struct
{
    int rollno;
    char name[30];
    float marks;
} Student;

void display(Student *students, int size);
void sort_students_by_marks(Student *students, int size);

int main()
{
    Student students[SIZE] =
    {
        {10, "Nilanshu", 85.5},
        {15, "Guru", 92.3},
        {19, "Harish", 78.6},
        {22, "Bensen", 88.0},
        {25, "Omsen", 91.4},
        {27, "Shantunu", 67.5},
        {29, "Satyam", 73.0},
        {32, "Shashi", 80.2},
        {35, "Mayur", 94.1},
        {36, "Rahul", 72.3}
    };

    printf("Before sorting \n");
    display(students, SIZE);

    sort_students_by_marks(students, SIZE);

    printf("\nAfter sorting by marks\n");
    display(students, SIZE);

    return 0;
}

void display(Student *students, int size)
{
    for (int i = 0; i < size; i++)
        printf("Roll No: %d, Name: %s, Marks:%.2f\n", (students + i)->rollno, (students + i)->name, (students + i)->marks);
}

void sort_students_by_marks(Student *students, int size)
{
    Student temp;
    for(int i=0; i<size-1; i++)
    {
        for (int j=0; j < size-i-1; j++)
        {
            if((students + j)->marks < (students + j + 1)->marks)
            {
                temp = *(students + j);
                *(students + j) = *(students + j + 1);
                *(students + j + 1) = temp;
            }
        }
    }
}
