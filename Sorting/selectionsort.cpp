#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        int idx = i;
        for(int j=i+1;j<n;j++){
            if(arr[idx] > arr[j]){
                idx = j;
            }
        }
        swap(arr[idx],arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}