#include <stdio.h>
#include <string.h>

struct Student
{
   char name[50];
   float GPA;
};

void swapping(struct Student *s1, struct Student *s2)
{
   struct Student temp;
   strcpy(temp.name, s1->name);
   temp.GPA = s1->GPA;

   strcpy(s1->name, s2->name);
   s1->GPA = s2->GPA;

   strcpy(s2->name, temp.name);
   s2->GPA = temp.GPA;
}

int main()
{
   struct Student student1, student2;

   printf("Enter details of student1:\n");
   printf("Name: ");
   fgets(student1.name, sizeof(student1.name), stdin);
   student1.name[strcspn(student1.name, "\n")] = '\0'; 
   printf("GPA: ");
   scanf("%f", &student1.GPA);
   getchar(); 

   printf("\nEnter details of student2:\n");
   printf("Name: ");
   fgets(student2.name, sizeof(student2.name), stdin);
   student2.name[strcspn(student2.name, "\n")] = '\0';
   printf("GPA: ");
   scanf("%f", &student2.GPA);

   printf("\nInitial details:\n");
   printf("Student1: Name = %s, GPA = %.2f\n", student1.name, student1.GPA);
   printf("Student2: Name = %s, GPA = %.2f\n", student2.name, student2.GPA);

   swapping(&student1, &student2);

   printf("\nAfter swapping:\n");
   printf("Student1: Name = %s, GPA = %.2f\n", student1.name, student1.GPA);
   printf("Student2: Name = %s, GPA = %.2f\n", student2.name, student2.GPA);

   return 0;
}