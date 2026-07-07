//Print N to 1 using Recursion
#include<iostream>
using namespace std;

void printNumbers(int n) {
        if(n<1) return;
        cout<<n<<endl;
        printNumbers(n-1);
        
    }

int main(){

    printNumbers(10);

return 0;
}