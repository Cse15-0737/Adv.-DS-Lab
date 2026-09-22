#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
        a = b;
        b = temp;
}
int partition(int arr[], int l, int h){
    int pivot = arr[l];
    int i = l+1;
    int j = h-1;
    while(i<=j){
        while(arr[i]<=pivot && i<h){
            i++;
        }
        while(arr[j]>pivot && j>l){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[l], arr[j]);
    return j;
};

void quickSort(int arr[], int l, int h){
    if(l<h){
        int pi = partition(arr, l, h);
        quickSort(arr, l, pi);
        quickSort(arr, pi+1, h);
    }
}
int main(){
    int arr[] = {10, 80, 30, 90, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}