#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++)


        cout << arr[i] << " ";
        
    cout << endl;
}

int main() {
    int m =0;
    cin>>m;
    int arr[100]={0,};
    for(int i=0;i<m;i++)
    {
        int t=0;
        cin>>t;
        arr[i]=t;
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, m);
    printArray(arr, m);

    return 0;
}