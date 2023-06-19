#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LIMIT 20 

int main()
{
    char str[MAX_LIMIT];
    printf("Enter a time : ");
    fgets(str, MAX_LIMIT, stdin);
    char *hour = strtok(str, ":");
    char *min = strtok(NULL, ":");
    char *sec = strtok(NULL, ":");
    int num = 0;
    num += atoi(hour)*60*60;
    num += atoi(min)*60;
    num += atoi(sec);
    printf("The time in seconds is : %d\n", num);

    return 0;
}