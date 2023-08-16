#include <stdio.h>

int findUnique(int arr[], int size) {
    int result = 0;
    
    for (int i = 0; i < size; i++) {
        result ^= arr[i]; // XOR each element
    }
    
    return result;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int uniqueNumber = findUnique(arr, size);
    
    printf("The unique number in the array is: %d\n", uniqueNumber);
    
    return 0;
}
