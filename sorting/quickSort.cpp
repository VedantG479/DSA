#include<iostream>
using namespace std;
int partition(int *arr, int start, int end){
    int pivot = arr[start], count = 0;
    for(int i=start+1; i<=end; i++){
        if(arr[i] < pivot)  count++;
    }

    int pivotIndex = start + count;
    swap(arr[start],arr[pivotIndex]);

    int i = start, j = end;
    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(arr[i] > pivot && arr[j] < pivot){
            swap(arr[i],arr[j]);
            ++i;
            --j;
        }
    }
    return pivotIndex;
}
void quickSort(int *arr, int start, int end){
    if(start >= end)    return;

    int p = partition(arr,start,end);

    quickSort(arr,start,p);
    quickSort(arr,p+1,end);
}
int main(){
    int arr[] = {38,27,43,3,9,82,19,10};

    quickSort(arr,0,7);

    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}