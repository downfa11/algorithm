#include <iostream>
using namespace std;

void func(int n){
    if(n<1) return;

    cout << n << " ";
    func(n-1);
    cout << n << " ";
}

int main() {
    int n;
    cin >> n;
    func(n);

    return 0;
}