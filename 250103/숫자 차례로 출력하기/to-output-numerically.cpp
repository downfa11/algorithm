#include <iostream>
using namespace std;


void func1(int n){
    if(n<1) return;

    func1(n-1);
    cout << n << " ";
}

void func2(int n){
    if(n<1) return;

    cout << n << " ";
    func2(n-1);
}

int main() {
    int n;
    cin>>n;

    func1(n);
    cout << endl;

    func2(n);

    return 0;
}