#include<iostream>
using namespace std;
void merge(int *arr, int start, int end){
    int mid = start + (end - start)/2;
    int len1 = mid  - start + 1, len2 = end - mid;
    int *arrFirst = new int[len1];
    int *arrSecond = new int[len2];

    int mainArrayIndex = start;
    for(int i=0; i<len1; i++){
        arrFirst[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for(int i=0; i<len2; i++){
        arrSecond[i] = arr[mainArrayIndex++];
    }

    int index1 = 0, index2 = 0;
    mainArrayIndex = start;
    while(index1<len1 && index2<len2){
        if(arrFirst[index1] < arrSecond[index2]){
            arr[mainArrayIndex++] = arrFirst[index1++];
        }
        else{
            arr[mainArrayIndex++] = arrSecond[index2++];
        }
    }
    while(index1 < len1) {
        arr[mainArrayIndex++] = arrFirst[index1++];
    }
    while(index2 < len2) {
        arr[mainArrayIndex++] = arrSecond[index2++];
    }
}
void mergeSort(int *arr, int start, int end){
    if(start >= end)    return;
    int mid = start + (end - start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,end);
}
int main(){
    int arr[] = {38,27,43,3,9,82,19,10};

    mergeSort(arr,0,7);

    for(int i=0; i<8; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}