#include<iostream>
using namespace std;

    int count=0;
    bool function(){
        if (count==5) return true;
        count++;
        function();
    }

int main(){
    bool value=function();
    if (value==true){
        cout<<"The value of count is " << count <<endl;
    }
return 0;
}