#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
   char name[50];
   int age;
   char courseName[50];
   float gpa;
} Student;

int main()
{
   int n, i;


   printf("Enter the number of students: ");

   scanf("%d", &n);

   getchar();

   Student *students = (Student *)malloc(n * sizeof(Student));

   for (i = 0; i < n; i++)
   {
      printf("\nEnter details for student %d:\n", i + 1);

      printf("Name: ");
      fgets(students[i].name, sizeof(students[i].name), stdin);
      students[i].name[strcspn(students[i].name, "\n")] = '\0'; 

      printf("Age: ");
      scanf("%d", &students[i].age);
      getchar(); 

      printf("Course Name: ");
      fgets(students[i].courseName, sizeof(students[i].courseName), stdin);
      students[i].courseName[strcspn(students[i].courseName, "\n")] = '\0'; 

      printf("GPA: ");
      scanf("%f", &students[i].gpa);
      getchar();
   }

   printf("\nStudent details:\n");
   
   for (i = 0; i < n; i++)
   {
      printf("\nDetails of student %d:\n", i + 1);
      printf("Name: %s\n", students[i].name);
      printf("Age: %d\n", students[i].age);
      printf("Course Name: %s\n", students[i].courseName);
      printf("GPA: %.2f\n", students[i].gpa);
   }

   free(students);

   return 0;
}