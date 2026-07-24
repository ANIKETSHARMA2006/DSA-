#include<iostream>
using namespace std;

bool isArraySorted(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        if(arr[i]>arr[i+1]){
             return false;
        }
    }
    return true;
}

int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    int res=isArraySorted(arr,n);
    if(res==true){
        cout<<"The given array is sorted";
    }
    else{
        cout<<"The given array is not sorted";
    }
return 0;
}