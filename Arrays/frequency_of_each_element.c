#include <stdio.h>

void findFrequency(int arr[], int size) {
    int freq[size];
    
    // Initialize frequency array with -1
    for (int i = 0; i < size; i++) {
        freq[i] = -1;
    }

    for (int i = 0; i < size; i++) {
        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark this element as counted
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("Element | Frequency\n");
    printf("-------------------\n");
    for (int i = 0; i < size; i++) {
        if (freq[i] != 0) {
            printf("%d       | %d\n", arr[i], freq[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2,4 , 5, 3, 6,7,1 ,100 ,12 ,1 ,2,4, 3, 3, 3, 4, 5, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    findFrequency(arr, size);

    return 0;
}