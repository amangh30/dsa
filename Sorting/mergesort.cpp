#include <iostream>
using namespace std;

void merge(int* arr,int n,int low,int mid, int high){
    int left = low;
    int right = mid+1;

    int temp[high-low+1];
    int i=0;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp[i] = arr[left];
            i++;
            left++;
        }
        else{
            temp[i] = arr[right];
            i++;
            right++;
        }
    }
    while(left<=mid){
        temp[i] = arr[left];
        left++;
        i++;
    }

    while(right<=high){
        temp[i] = arr[right];
        right++;
        i++;
    }

    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }

}

void merge_sort(int* arr, int n,int low,int high){
    if(low >= high) return;
    int mid = (low+high)/2;
    merge_sort(arr,n,0,mid);
    merge_sort(arr,n,mid+1,high);
    merge(arr,n,low,mid,high);
}

int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    merge_sort(arr,n,0,n-1);
    
    cout<<"The new array after sorting"<<endl;
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}