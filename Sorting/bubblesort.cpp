#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements:"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
            }
        }
    }

    cout<<"The new array after sorting"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

// Bubble Sort, Time Complexity: O(n^2), Space Complexity: O(1)
