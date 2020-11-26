#include <stdio.h>
#include <stdlib.h>
#include "Algoritmos.h"
//#define TAM 10

int main()  
{  
    int TAM = 15; // temporario
    int *data, i=0;

    FILE *readFile;
    data = (int *)malloc(TAM*sizeof(int));
    readFile = fopen("teste1.txt", "r");
    while(!feof(readFile)){
    fscanf(readFile, "%d", &data[i]);
    i++;
    }
    fclose(readFile);
    
    //TAM = sizeof(data)/sizeof(data[0]);  // bug - resolver
    selectionSort(data, TAM); 
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
    int arr[] = {64, 25, 12, 22, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]);  // dando problema na adaptacao
    selectionSort(arr, n); 
    printf("Sorted array: \n"); 
    printArray(arr, n); 
    return 0; 
}*/