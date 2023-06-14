#include<stdio.h>

void biggerNum(int a ,int b){
    
    if(a==b){
         printf("Both no are equal");
    }
    else{
    (a>b)?printf("first no is greater than second"):printf("second no is greater than first");
    }
  }
int main()
{
    int a,b;
    //int ans;
    printf("Enter the first no = ");
    scanf("%d",&a);
    printf("Enter the second no =");
    scanf("%d",&b);
    biggerNum(a,b);
    return 0;
}