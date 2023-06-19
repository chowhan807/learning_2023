#include <stdio.h>
#define MAX_LIMIT 20 
void toggleChars(char str[])
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 'a' - 'A';
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] + 'A' - 'a';
    }
}
 
int main()
{
    char str[MAX_LIMIT];
    printf("Enter a string : ");
    fgets(str, MAX_LIMIT, stdin);
    // printf("%s", str);
    toggleChars(str);
    printf("String after toggle is : ");
    printf("%s\n", str);
    return 0;
}