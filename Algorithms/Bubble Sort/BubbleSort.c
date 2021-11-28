#include<stdio.h>
#include<conio.h>


//Swap Method
void Swap(int A[], int i, int j){
    int temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}


//Bubble Sort Method
void BubbleSort(int A[], int Arr_Size){
    //moving throughout the array
    for (int i = 0; i < Arr_Size - 1; i++){
        //moving to compare the adjacent elements
        for (int j = 0; j < Arr_Size - i - 1; j++){
            if (A[j + 1] < A[j]){
                Swap(A, j + 1, j);
            }
        }
    }
}


//Array Visualization Method
void VisualizeArray(int A[], int Arr_Size) 
{ 
    int i; 
    for (i = 0; i < Arr_Size ; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 


//Driver Code
void main(){
    int A[] = {2, 9,6,3,4,72, 22, 44};
    int Arr_Size = sizeof(A) /sizeof(int);

    VisualizeArray(A, Arr_Size);
    BubbleSort(A, Arr_Size);
    VisualizeArray(A, Arr_Size);
}