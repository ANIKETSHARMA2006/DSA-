#include<bits/stdc++.h>
using namespace std;

    vector<int> bubbleSort(vector<int> &arr){
        for (int i=arr.size()-1; i > 0; i--){
            for(int j=0; j<i; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
        for (int i = 0; i < arr.size(); i++){
            cout<<arr[i];
        }
        
        return arr;
    }

int main(){
vector <int> arr={7,6,5,4,3,2,1};
bubbleSort(arr);
return 0;
}