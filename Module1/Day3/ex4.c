#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int temp = num;
    int temp1,temp2;
    int divisor = 1;

    
        int d4 = temp % 10;
        temp /= 10;
        int d3 = temp % 10;
        temp /= 10;
        int d2 = temp % 10;
        temp /= 10;
        int d1 = temp % 10;
        int a,b,c,d;
        a= d1*100 + d2*10 + d3;
        b= d1*100 + d2*10 + d4;
        c= d1*100 + d3*10 + d4;
        d= d2*100 + d3*10 + d4;
        
        if (a>b)
        temp1=a;
        else
        temp1=b;
        
        if (c>d)
        temp2=c;
        else 
        temp2=d;
        
        if (temp1>temp2)
        largest=temp1;
        else
        largest=temp2;
        
    return largest;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    if (number >= 1000 && number <= 9999) {
        int largestNumber = findLargestNumber(number);
        printf("The largest number by deleting a single digit: %d\n", largestNumber);
    } else {
        printf("Invalid input! Please enter a 4-digit number.\n");
    }

    return 0;
}