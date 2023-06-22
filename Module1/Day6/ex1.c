#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
   int rollno;
   char name[20];
   float marks;
};


void Parse_String(const char *input, struct Student *student)

{
   const char *deliminetor = " ";
   char *token;

   char *inputcopy = strdup(input);

   token = strtok(inputcopy, deliminetor);

   if (token != NULL)
   {
      student->rollno = atoi(token);

      token = strtok(NULL, deliminetor);

      strncpy(student->name, token, sizeof(student->name) - 1);
      student->name[sizeof(student->name) - 1] = '\0';


      token = strtok(NULL, deliminetor);
      student->marks = atof(token);
   }

   free(inputcopy);
}

int main()
{
   int size;

   printf("Enter the number of students: ");
   scanf("%d", &size);
   getchar();

   struct Student *students = malloc(size * sizeof(struct Student));

   char input[100];
   for (int i = 0; i < size; i++)
   {
      printf("Enter student %d details (rollno name marks): ", i + 1);
      fgets(input, sizeof(input), stdin);
      input[strcspn(input, "\n")] = '\0';

      Parse_String(input, &students[i]);
   }


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