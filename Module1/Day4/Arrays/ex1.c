#include <stdio.h>

int sumAvg(int * arr, int size){
    int res=0;
    for (int i=0; i<size; i++){
        res+=arr[i];
    }
    return res;
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
    int s=sumAvg(arr,l);
    printf("Sum of array elements is : %d",s);
    printf("Average of array elements is : %d", s/l);
    return 0;
}