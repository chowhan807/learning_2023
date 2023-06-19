#include <stdio.h>

void minMax(int arr[], int size){
    int miN=arr[0], maX=arr[0];
    for (int i=0; i<size; i++){
        if (arr[i] > maX) maX=arr[i];
        if (arr[i]<miN) miN=arr[i];
    }
    printf("minimum value of array is : %d\n",miN);
    printf("maximum value of array is : %d\n", maX);
    return;
}
int main(){
    int l;
    printf("Enter the Size of Array : ");
    scanf("%d",&l);
    int arr[l];
    printf("Enter Array elements : ");
    for (int i=0; i<l; i++){
        scanf("%d",&arr[i]);
    }
    minMax(arr,l);
    return 0;
}