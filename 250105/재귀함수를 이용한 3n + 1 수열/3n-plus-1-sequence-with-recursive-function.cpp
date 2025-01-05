#include <iostream>
using namespace std;

int count = 0;

int func(int n){
    if(n==1) return n;

    count++;
    if(n%2==0) return func(n/2);
    else if(n%3==0) return func(n * 3 + 1);
}

int main() {
    int n;
    cin >> n;

    func(n);
    cout << count << endl;
    return 0;
}