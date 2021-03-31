#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the toal number of values:";
    cin>>n;
    int arr[n];
    cout << "Enter the values\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        int swapped = 0;
        for (int j = 0; j < n - i - 1; ++j) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped++;
            }
        }
        if(!swapped)
            break;
    }
    cout << "Values in Sorted Order are:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0; 
}