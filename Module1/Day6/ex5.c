#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
   int rollno;
   char name[20];
   float marks;

};

void search_Student_ByName(const struct Student *students, int size, const char *searchName)
{
   int found = 0;
   for (int i = 0; i < size; i++)
   {
      if (strcmp(students[i].name, searchName) == 0)

      {
         found = 1;
         printf("\nStudent found:\n");
         printf("Roll No: %d\n", students[i].rollno);
         printf("Name: %s\n", students[i].name);
         printf("Marks: %.2f\n\n", students[i].marks);
      }
   }

   if (!found)

   {
      printf("\nStudent not found.\n");
   }
}

int main()

{
   int size;

   printf("\n\tEnter the number of students: ");
   scanf("%d", &size);
   getchar();
   printf("\n ----------------------------\n");

   struct Student *students = malloc(size * sizeof(struct Student));

   for (int i = 0; i < size; i++)
   {
      printf("Enter student %d details (rollno name marks): ", i + 1);
      scanf("%d %s %f", &(students[i].rollno), students[i].name, &(students[i].marks));
      getchar();

   }

   char srcName[20];
   
   printf("Enter the name of the student to search: ");
   scanf("%s", srcName);

   search_Student_ByName(students, size, srcName);

   free(students);

   return 0;
}