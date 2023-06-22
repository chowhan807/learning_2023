#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
   int rollno;
   char name[20];
   float marks;
};


void Initialize_Students(struct Student *students, int size)
{
   for (int i = 0; i < size; i++)
   {
      students[i].rollno = 0;

      strcpy(students[i].name, "");
      students[i].marks = 0.0;
   }
}

int main()
{
   int size;

   printf("\nEnter the number of students: ");
   scanf("%d", &size);
   getchar();


   struct Student *students = malloc(size * sizeof(struct Student));

   Initialize_Students(students, size);

   for (int i = 0; i < size; i++)
   {
      printf("\nStudent %d:\n", i + 1);
      printf("\nRoll No: %d\n", students[i].rollno);
      printf("\nName: %s\n", students[i].name);
      printf("\nMarks: %.2f\n\n", students[i].marks);
   }

   free(students);

   return 0;
}