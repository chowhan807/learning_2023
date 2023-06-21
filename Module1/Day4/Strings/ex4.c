#include<stdio.h>

int Leap_Year(int year)
{
   if (year % 400 == 0)

      return 1;
      
   if (year % 100 == 0)
      return 0;

   if (year % 4 == 0)

      return 1;

   return 0;
}

int Days_In_Month(int month, int year)
{
   int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

   if (month == 2 && Leap_Year(year))

      return 29;

   return daysInMonth[month - 1];
}

int count_Days(int day, int month, int year)
{
   int days = day;
   for (int i = 1; i < month; i++)
   {
      days += Days_In_Month(i, year);
   }
   return days;
}

int main()
{
   int day, month, year;
   printf("\n\t Enter the date (DD/MM/YYYY): ");

   scanf("%d/%d/%d", &day, &month, &year);

   int Days = count_Days(day, month, year);

   printf("\n\t The Number of days Elapsed: %d\n", Days);

   return 0;
}