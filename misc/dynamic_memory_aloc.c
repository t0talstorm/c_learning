#include <stdio.h>
#include <stdlib.h>

// c program to ask the user the size of an integer array at run time and using malloc insert and display the element
int main(){
int n = 0;

printf("Enter the size of the array: ");
scanf("%d", &n);

//int *arr = (int *)calloc(n , sizeof(int));
int *arr = (int *)malloc(n*sizeof(int));

if(arr == NULL){
    printf("Memory not allocated\n");
    exit(0);
}

    for(int i = 0; i < n; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n\n");
    for(int i = 0; i < n; i++){
        printf("Element %d is: %d\n", i+1, arr[i]);
    }
    int m;
    printf("\nhola\n");
    printf("Enter the size you want to increase the array with: ");
    scanf("%d", &m);

    arr = (int *)realloc(arr, m*sizeof(int));

    for(int i = n; i < n+m; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n\n");
    for(int i = 0; i < n+m; i++){
        printf("Element %d is: %d\n", i+1, arr[i]);
    }    

    

    for(int i = 0; i < n+m; i++){
        printf("Element %d address is: %u\n", i+1, &arr[i]);
    
    }

    free(arr);
return 0;
}