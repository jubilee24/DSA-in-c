#include<stdio.h>

void printArray(int *A, int n){
    for(int i = 0; i<n-1; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n){
    int minIndex;
    printf("Running selection sort.....\n");
    for(int i = 0; i<n-1; i++){
        minIndex = i;
    
    for(int j = i+1; j<n-1; j++){
        if(A[j]<A[minIndex])
        minIndex = j;
        }
        int temp = A[i];
        A[i] = A[minIndex];
        A[minIndex] = temp;
    }
}

int main(){
    int A[] = {3, 15, 8, 1, 12, 5, 2};
    int n = 7;
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);
    return 0;
}