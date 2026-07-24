#include<iostream>
using namespace std;

    int largestElement(int arr[], int n){
        int maxval=0;
        for (int i = 0; i < n; i++){
            if (arr[i]>maxval){
                maxval=arr[i];
            }
            
        }
        return maxval;
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<largestElement(arr,n);
return 0;
}