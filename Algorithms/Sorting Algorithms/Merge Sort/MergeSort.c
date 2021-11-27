#include <stdio.h>
#include <conio.h>


//Merge Method
void Merge(int Arr[], int l, int mid, int r){
    int Arr_Size = r + 1;
    int B[Arr_Size];

    int i = l;
    int j = mid + 1;
    int k = l;

    //moving in two subarrays A[l...mid] and A[mid+1....r] using i and j respectively 
    while (i <= mid && j <= r){
        //if left subarray element smaller add it to the duplicate final array
        if (Arr[i] < Arr[j]){
            B[k] = Arr[i];
            i++;            
        }
        //if right subarray element smaller add it to the duplicate final array
        else if (Arr[i] > Arr[j]){
            B[k] = Arr[j];
            j++;
        }
        k++;
    }
    
    //if left subarray exhausts then append all rest elements of right subarray into final array
    if (i > mid){
        while (j <= r){
            B[k] = Arr[j];
            j++;
            k++;
        }
    }
    //if right subarray exhausts then append all rest elements of right subarray into final array
    else if (j > r){
        while (i <= mid){
            B[k] = Arr[i];
            i++;
            k++;
        }
    }

    //copy all the elements of duplicate final array to the original array
    for (k = l; k <= r; k++){
        Arr[k] = B[k];
    }

   
}


//Merge Sort Method
void MergeSort(int Arr[], int l, int r){
    if (l < r){
        int mid = (l + r)/2;
        MergeSort(Arr, l, mid);
        MergeSort(Arr, mid + 1, r);
        Merge(Arr, l, mid, r);

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
    int A[] = {12, 11, 13, 5, 6, 7 };
    int Arr_Size = sizeof(A) / sizeof(int);
    int l = 0;
    int r =  Arr_Size - 1;
    
    VisualizeArray(A, Arr_Size);
    MergeSort(A, l, r);
    VisualizeArray(A, Arr_Size);


}