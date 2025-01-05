#include <iostream>

using namespace std;

int func(int i){
    if(i==1) return 2;
    else if(i==2) return 4;

    return (func(i-2) * func(i-1)) % 100;
}

int main() {
    int n;
    cin >> n;

    cout << func(n) << endl;
    return 0;
}