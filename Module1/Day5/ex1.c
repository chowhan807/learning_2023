#include <stdio.h>

struct box
{
   double length;

   double width;

   double height;
};

double volume(struct box *box)
{
   return box->length * box->width * box->height;
}

double Area_of_Surface(struct box *box)
{
   double length = box->length;

   double width = box->width;

   double height = box->height;

   return 2 *(length * width + length * height + width * height);
}

int main()
{
   struct box mybox;

   printf("Enter Dimensions of the box:\n");
   
   printf("Length: ");
   scanf("%lf", &mybox.length);

   printf("Width: ");
   scanf("%lf", &mybox.width);

   printf("Height: ");
   scanf("%lf", &mybox.height);

   struct box *boxPtr = &mybox;

   printf("\n \t By Using (*) and (.) operators:\n");

   printf("Length: %.2f\n", (*boxPtr).length);
   printf("Width: %.2f\n", (*boxPtr).width);

   printf("Height: %.2f\n", (*boxPtr).height);
   printf("Volume: %.2f\n", volume(boxPtr));

   printf("Area of Surface : %.2f\n", Area_of_Surface(boxPtr));

   printf("\n \t By Using (->) operator:\n");
   printf("Length: %.2f\n", boxPtr->length);

   printf("Width: %.2f\n", boxPtr->width);

   printf("Height: %.2f\n", boxPtr->height);
   printf("Volume: %.2f\n", volume(boxPtr));

   printf("Surface Area is : %.2f\n",Area_of_Surface(boxPtr));

   return 0;
}