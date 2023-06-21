#include<stdio.h>

struct Time_Period
{
   int hours;
   int minutes;
   int seconds;
};

struct Time_Period calculateTimeDifference(struct Time_Period start, struct Time_Period end)
{
   struct Time_Period diff;

   int start_TimeInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
   int end_TimeInSeconds = end.hours * 3600 + end.minutes * 60 + end.seconds;

   int diff_InSeconds = end_TimeInSeconds - start_TimeInSeconds;

   diff.hours = diff_InSeconds / 3600;
   diff_InSeconds %= 3600;
   diff.minutes = diff_InSeconds / 60;
   diff.seconds = diff_InSeconds % 60;

   return diff;
}

int main()
{
   struct Time_Period start, end, difference;

   printf("Enter the start time period (hours minutes seconds): ");
   scanf("%d %d %d", &start.hours, &start.minutes, &start.seconds);

   printf("Enter the end time period (hours minutes seconds): ");
   scanf("%d %d %d", &end.hours, &end.minutes, &end.seconds);

   difference = calculateTimeDifference(start, end);

   printf("Difference: %d hours %d minutes %d seconds\n", difference.hours, difference.minutes, difference.seconds);

   return 0;
}