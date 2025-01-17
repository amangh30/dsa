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
    
    for(int i=0;i<n;i++){
        int j = i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    
    cout<<"The new array after sorting"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}