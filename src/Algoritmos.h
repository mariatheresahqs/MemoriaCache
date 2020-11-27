#ifndef Algoritmos_H_INCLUDED
#define Algoritmos_H_INCLUDED

//----------------------------------------------
//         SELECTION SORT
//----------------------------------------------
void swap(int *xp, int *yp);
void selectionSort(int arr[], int n);
void printArray(int arr[], int size); // PARA TESTE

//----------------------------------------------
//         BUBBLESORT
//----------------------------------------------
void bubbleSort(int arr[], int n);

//----------------------------------------------
//         QUICKSORT
//----------------------------------------------
int Particoes(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

//----------------------------------------------
//         RADIX SORT
//----------------------------------------------
void radixsort(int vetor[], int tamanho);
#endif
