#include <stdio.h>
#include <string.h>
#define MAX_LIMIT 20 
int main()
{
    char str[MAX_LIMIT];
    printf("Enter a string : ");
    fgets(str, MAX_LIMIT, stdin);
    int num = 0;
  
    for (int i = 0; str[i] != '\0'; i++) {
        num = num * 10 + (str[i] - 48);
    }
  
    printf("The Integer is : %d\n", num);
    return 0;
}