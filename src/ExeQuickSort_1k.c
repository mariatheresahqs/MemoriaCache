#include <stdio.h>
#include <stdlib.h>
#include "Algoritmos.h"
//#define TAM 1000

int main()  
{  
    int TAM = 1000;
    int *data, i=0;

    FILE *readFile;
    data = (int *)malloc(TAM*sizeof(int));
    readFile = fopen("teste1k.txt", "r");
    while(!feof(readFile)){
    fscanf(readFile, "%d", &data[i]);
    i++;
    }
    fclose(readFile);
    quickSort(data, 0, TAM -1); 
    printf("Sorted array: \n"); // temporario
    printArray(data, TAM);  // temporario
    return 0;  
} 

/*
-----------------------------------------
 Codigo no GeeksforGeeks
-----------------------------------------
int main() 
{ 
    int arr[] = {10, 7, 8, 9, 1, 5}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    quickSort(arr, 0, n-1); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
} 
*/