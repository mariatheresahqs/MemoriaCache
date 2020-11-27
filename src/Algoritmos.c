// Referencia: GeeksforGeeks-> https://www.geeksforgeeks.org/selection-sort/
// C program for implementation of selection sort 
#include <stdio.h> 
#include <stdlib.h>
#include "Algoritmos.h"


//-------------------------------------------------------------------
//         SELECTION SORT
//-------------------------------------------------------------------
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
/*
//----------------------------------------------
//         BUBBLESORT
//----------------------------------------------
void swap(int *xp, int *yp){
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}
//função Bubblesort
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 

//----------------------------------------------
//         QUICKSORT
//----------------------------------------------
int Particoes(int arr[], int low, int high) 
{ 
    int pivot = arr[high];    // pivot 
    int i = (low - 1);  //Índice do elemento menor
  
    for (int j = low; j <= high- 1; j++) 
    { 
        //Se o elemento atual for menor que o pivô 
        if (arr[j] < pivot) 
        { 
            i++;    // incrementa o índice do elemento menor 
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 

void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        // * pi é índice de particionamento, arr [p] está agora no lugar certo * /
        int pi = Particoes(arr, low, high); 
  
        // Classifique os elementos separadamente antes da partição e depois da partição
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
*/