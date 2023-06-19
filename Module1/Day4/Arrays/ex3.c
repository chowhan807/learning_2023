#include <stdio.h>

void revArr(int arr[], int start, int end){
    int temp;
    while (start < end){
        temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    return;
}
void printArr(int arr[], int size){
    for (int i=0; i<size; i++){
        printf("%d\t",arr[i]);
    }
    return;
}
int main(){
    int length;
    printf("Enter the Size of Array : ");
    scanf("%d",&length);
    int arr[length];
    printf("Enter Array elements : ");
    for (int i=0; i<length; i++){
        scanf("%d",&arr[i]);
    }
    revArr(arr, 0, length-1);
    printf("Reversed Array is : ");
    printArr(arr, length);
    return 0;
}