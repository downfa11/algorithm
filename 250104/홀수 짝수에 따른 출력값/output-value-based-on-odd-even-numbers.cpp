#include <iostream>
using namespace std;

int func(int n){
    if(n<2) return n;
    return n + func(n-2);
}

int main() {
    int n;
    cin >> n;
    cout << func(n) << endl;
    return 0;
}