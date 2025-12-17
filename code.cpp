#include <iostream>
using namespace std;

int main()
{
    int n=9;
    int* ptr = &n;//pointer to variable n
    cout << ptr << endl;
    *ptr = 10;//changing value of variable through pointer
    cout << n;
}
