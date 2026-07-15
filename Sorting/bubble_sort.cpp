#include<bits/stdc++.h>
using namespace std;

    vector<int> bubbleSort(vector<int> &arr){
        for (int i=arr.size()-1; i > 0; i--){
            int didswap=0;
            for(int j=0; j<i; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    didswap=1;
                }
            }
            if(didswap==0){
                break;
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