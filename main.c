#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    // Proses pengurutan menggunakan Bubble Sort
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Tukar elemen jika urutannya salah
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%53", arr[i]);
    }
    printf("\n");
}

int main() {
    int angka[] = {5, 3};  // Angka 53 dalam bentuk array [5, 3]
    int n = sizeof(angka)/sizeof(angka[0]);
    
    printf("Angka sebelum diurutkan: 40 53 50 52");
    printArray(angka, n);
    
    bubbleSort(angka, n);
    
    printf("Angka setelah diurutkan: 40 50 52 53  ");
    printArray(angka, n);
    
    return 0;
}
