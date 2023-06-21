#include <stdio.h>
#include <string.h>

void rotate_left(char *str, int k)
{
   int len = strlen(str);
   
   k = k % len;

   for (int i = 0; i < k; i++)
   {
      char temp = str[0];
      for (int j = 0; j < len - 1; j++)
      {
         str[j] = str[j + 1];
      }
      str[len - 1] = temp;
   }
}

void rotate_right(char *str, int k)
{
   int len = strlen(str);
   k = k % len;

   for (int i = 0; i < k; i++)
   {
      char temp = str[len - 1];
      for (int j = len - 1; j > 0; j--)
      {
         str[j] = str[j - 1];
      }
      str[0] = temp;
   }
}

int main()
{
   char str[100];
   int k;
   char direction[10];

   printf("Enter a string: ");
   scanf("%s", str);

   printf("Enter the number of rotations: ");
   scanf("%d", &k);

   printf("Enter the rotation direction (Left/Right): ");
   scanf("%s", direction);

   if (strcmp(direction, "Left") == 0)
   {
      rotate_left(str, k);
   }
   else if (strcmp(direction, "Right") == 0)
   {
      rotate_right(str, k);
   }
   else
   {
      printf("\n\t The rotation direction is Invalid. \n\t Please enter Right or Left .\n");
      return 1;
   }

   printf("\n\t The Rotated string: %s\n", str);

   return 0;
}