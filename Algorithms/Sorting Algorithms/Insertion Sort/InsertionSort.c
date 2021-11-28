#include<stdio.h>
#include<conio.h>


//Insertion Sort Method
void InsertionSort(int A[], int Arr_size){
    for (int i = 1; i < Arr_size; i++){
        int key = A[i];
        int j = i - 1;

        while(j >= 0 && A[j] > key){
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}


//Array Visualization Method
void VisualizeArray(int A[], int Arr_size){
    int i;
    for (i = 0; i < Arr_size; i++)
        printf("%d ", A[i]);
    printf("\n");
}


//Driver Code
void main(){
    int A[] = {6,7,9,3,5,2,1};
    int Arr_size = sizeof(A) / sizeof(int);

    VisualizeArray(A, Arr_size);
    InsertionSort(A,Arr_size);
    VisualizeArray(A, Arr_size);
}