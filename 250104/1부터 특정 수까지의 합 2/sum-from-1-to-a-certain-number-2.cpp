#include <iostream>
using namespace std;

int func(int n){
    if(n>0)
        return n + func(n-1);
    return n;
}

int main() {
    int n;
    cin>>n;

    cout << func(n) << endl;
    return 0;
}