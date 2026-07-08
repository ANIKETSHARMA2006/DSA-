#include<iostream>
using namespace std;

int i=0;
    void reverse(int arr[], int n){
        if(i>=n/2) return;
        swap(arr[i],arr[n-i-1]);
        i++;
        reverse(arr,n);
    }
int main(){
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    reverse(arr,n);
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
return 0;
}