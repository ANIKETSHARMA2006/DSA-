//Sum of First N Numbers
#include <iostream>
using namespace std;

int NnumbersSum(int N)
{
    if (N < 1)
        return 0;
    return N + NnumbersSum(N - 1);
}

int main()
{

    cout<<NnumbersSum(4);

    return 0;
}