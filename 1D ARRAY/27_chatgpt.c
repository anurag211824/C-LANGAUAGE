#include <stdio.h>

void findDuplicate(int arr[], int size) {
    int i, j;
    
    printf("Duplicate elements in the array: ");
    
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
            }
        }
    }
    
    printf("\n");
}

int main() {
    int size, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    findDuplicate(arr, size);
    
    return 0;
}
