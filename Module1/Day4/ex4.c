#include <stdio.h>
void evenOddDiff(int arr[], int size){
    int even=0, odd=0;
    for (int i=0; i<size; i++){
        if (arr[i]%2==0) even+=arr[i];
        else odd+=arr[i];
    }
    if (even > odd)
        printf("difference between even and odd numbers of array is : %d\n",even-odd);
    else
        printf("difference between even and odd numbers of array is : %d\n", odd-even);
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
    evenOddDiff(arr,l);
    return 0;
}