#include <bits/stdc++.h>
using namespace std;
void bubbleSortRecursive(int arr[], int i, int n) {
    if (n == 1){
        return;
    }
    if (i == n - 1) {
        bubbleSortRecursive(arr, 0, n - 1);
        return;
    }
    if (arr[i] > arr[i + 1]) {
        swap(arr[i], arr[i + 1]);
    }
    bubbleSortRecursive(arr, i + 1, n);
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout <<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting: ";
    printArray(arr, n);
    bubbleSortRecursive(arr, 0, n);
    cout << "After sorting:  ";
    printArray(arr, n);
    return 0;
}