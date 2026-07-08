#include<iostream>
using namespace std;

    int fib(int n) {
        if(n<=1) return n;
        int last= fib(n-1);
        int SecoundLast = fib(n-2);
        return last+SecoundLast;
    }

int main(){
cout<<fib(10);
return 0;
}